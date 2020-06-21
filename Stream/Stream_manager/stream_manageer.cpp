#include "stream_manageer.h"
#include "ui_stream_manageer.h"
#include "Stream_database/stream_databasecontroller.h"
Stream_manageer::Stream_manageer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stream_manageer)
{
    if(!createConnection())
        return;
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("student");
    model->select();
    //设置编辑策略OnFieldChange:所有对模型的改变都会立即应用到数据库；OnRowChange:对一条记录的改变会在用户选择另一条记录时被应用；
    //OnManualSubmit所有改变都会在模型中进行缓存，知道调用submitAll()或revertAll()
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);


}

Stream_manageer::~Stream_manageer()
{
    delete ui;
}



void Stream_manageer::on_pushButton_clicked()
{
    model->database().transaction();
        if(model->submitAll())
        {
            if(model->database().commit())//提交
            {
               QMessageBox::information(this,u8"tableModel",u8"数据库修改成功！");
            }
            else
            {
                model->database().rollback();//回滚
                QMessageBox::warning(this,tr(u8"tableModel"),tr("数据库错误：%1").arg(model->lastError().text()),QMessageBox::Ok);
            }
        }

}

void Stream_manageer::on_pushButton_2_clicked()
{
        model->revertAll();
}

void Stream_manageer::on_pushButton_3_clicked()
{
    //获得表的行数
        int rowNum = model->rowCount();
        int id = 10;
        //添加一行
        model->insertRow(rowNum);
        model->setData(model->index(rowNum,0),id);
        //可以直接提交
        model->submitAll();

}

void Stream_manageer::on_pushButton_4_clicked()
{
    //获取选中的行
     int curRow = ui->tableView->currentIndex().row();
     //删除改行
     model->removeRow(curRow);
     int ok = QMessageBox::warning(this,u8"删除当前行",u8"你确定删除当前行吗?",QMessageBox::Yes,QMessageBox::No);

     if(ok==QMessageBox::No)
     {
         model->revertAll();//如果不删除，则撤销
     }
     else
     {
         model->submitAll();//否则提交，在数据库中删除该行
     }

}

void Stream_manageer::on_pushButton_5_clicked()
{

        model->setSort(0,Qt::AscendingOrder);
        model->select();
}

void Stream_manageer::on_pushButton_6_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}

void Stream_manageer::on_pushButton_7_clicked()
{
    QString name = ui->lineEdit->text();
    //根据姓名进行筛选，一定要使用单引号
    model->setFilter(QString("name='%1'").arg(name));
    model->select();
}


void Stream_manageer::on_pushButton_8_clicked()
{

        model->setTable("student");
        model->select();
}
