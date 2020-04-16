#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




string MainWindow::getAccountName()const
{
    return  string(ui->accountNumber->text().toStdString());
}

string MainWindow::getPassword() const
{

    return string (ui->accountPassword->text().toStdString() );
}

QString MainWindow::getLoginUserName()
{

    return ui->userLoginNamelineEdit->text();

}

QString MainWindow::getLoginPassword()
{
    return  ui->userLoginpasswordLineEdit->text();

}



void MainWindow::on_SignUp_2_clicked()
{
    //判断是不是空
    if(!getPassword().empty()&&!getAccountName().empty())
    {
        string a=getPassword();
//        *Stream_GLOBALDATA::getInstance()->currentPassword=getPassword();
//        *Stream_GLOBALDATA::getInstance()->currentAccountNumber=getAccountName();
//        string a=getPassword();
//        string b=getAccountName();
        Stream_loginSaving::saveOnDisk(getAccountName(),getPassword());
        QMessageBox::information(this,u8"注册成功",u8"请用你的账号密码登陆(关闭此对话框后,将会清空注册的输入框");


    }
    else
    {
        QMessageBox::warning(this,u8"警告",u8"请输入正确的账号密码");
    }
}

void MainWindow::on_adminPushButton_clicked()
{

    bool success=Stream_loginSaving::checkOnDisk(getLoginUserName(),getLoginPassword());

    if(success)
    {
            hallInstance=new Stream_hall();
            hallInstance->show();

    }

}

