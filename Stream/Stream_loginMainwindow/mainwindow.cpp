#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QUrl imageUrl("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1591427899480&di=6fc08e8b0af4b6c9bcc780bfbfc41221&imgtype=0&src=http%3A%2F%2Fupload.zznews.gov.cn%2F2018%2F0828%2F1535448060428.jpg");
//    FileDownloader *temp = new FileDownloader(imageUrl, this);
//    buttonImage.loadFromData(temp->downloadedData());
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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawPixmap(1000,1000,1000,100,buttonImage);
}



void MainWindow::on_SignUp_2_clicked()
{
    //判断是不是空
    if(!getPassword().empty()&&!getAccountName().empty())
    {
        string a=getPassword();
        Stream_loginSaving::saveOnDisk(getAccountName(),getPassword());
        QMessageBox::information(this,u8"注册成功",u8"请用你的账号密码登陆,3秒后自动跳转到登陆窗口");
        m_timer=new QTimer(this);
        connect(m_timer,SIGNAL(timeout()),this,SLOT(gotoadmin()));
        m_timer->start(2700);


    }
    else
    {
        QMessageBox::warning(this,u8"警告",u8"账号密码不能为空");
    }
}

void MainWindow::on_adminPushButton_clicked()
{

    bool success=false;
    success=Stream_loginSaving::checkOnDisk(getLoginUserName(),getLoginPassword());

    if(success==true)
    {
          hallDaemonInstance=new Stream_SwitchPage();
    }
    else
    {
        QMessageBox::warning(this,u8"警告",u8"账号密码错误");
        ui->userLoginpasswordLineEdit->clear();
    }

}

void MainWindow::gotoadmin()
{
//    ui->tabWidget->
    if(ui->u8->currentIndex()==1)
        ui->u8->setCurrentIndex(0);
}

