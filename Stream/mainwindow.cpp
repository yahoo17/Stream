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



void MainWindow::on_SignUp_2_clicked()
{
    //判断是不是空
    if(!getPassword().empty()&&!getAccountName().empty())
    {
        *Stream_GLOBALDATA::getInstance()->currentPassword=getPassword();
        *Stream_GLOBALDATA::getInstance()->currentAccountNumber=getAccountName();
//        string a=getPassword();
//        string b=getAccountName();
        Stream_GLOBALDATA::getInstance()->saveIt();
    }
    else
    {

    }
}
