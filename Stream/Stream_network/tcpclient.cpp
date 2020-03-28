#include "tcpclient.h"
#include "ui_tcpclient.h"

TcpClient::TcpClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TcpClient)
{
    ui->setupUi(this);
    status=false;
    port=8010;
    ui->portLineEdit->setText(QString::number(port));
    serverIP=new QHostAddress();

    connect(ui->enterPushBotton,SIGNAL(clicked()),this,SLOT(slotEnter()));
    connect(ui->sendPushButton,SIGNAL(clicked()),this,SLOT(slotSend()));

    ui->sendPushButton->setEnabled(false);
}
void TcpClient::dataReceived()
{

}
void TcpClient::slotDisconnected()
{

}
void TcpClient::slotSend()
{

}
void TcpClient::slotConnected()
{

}
void TcpClient::slotEnter()
{
    //status=true表示已经进入了聊天室
    if(!status)
    {
        QString ip=ui->serverIPLineEdit->text();
        //检查非法IP
        if(!serverIP->setAddress(ip))
        {

            QMessageBox::information(this,u8"error",u8"server ip address error!");
            return;
        }
        //检查用户名是否为空
        if(ui->userNameLineEdit->text()=="")
        {
            QMessageBox::information(this,u8"error",u8"User name error!");
            return;
        }

        userName=ui->userNameLineEdit->text();

        //新建一个socket 顺便把槽连起来
        tcpSocket=new QTcpSocket(this);

        connect(tcpSocket,SIGNAL(connected()),this,SLOT(slotConnected()));
        connect(tcpSocket,SIGNAL(disconnnected()),this,SLOT(slotDisconnected()));
        connect(tcpSocket,SIGNAL(readRead()),this,SLOT(dataReceived()));

        //与服务器相连接
        tcpSocket->connectToHost(*serverIP,port);
        status=true;


    }

    else
    {
        int length=0;
        QString msg=userName+u8"离开了房间";
        //通知服务器我要离开房间了
        if((length=tcpSocket->write(msg.toLatin1(),msg.length()))!=msg.length())
        {
            return;
        }
        //断开后会发出disconnected的信号
        tcpSocket->disconnectFromHost();

        status=false;
    }

}
TcpClient::~TcpClient()
{
    delete ui;
}
