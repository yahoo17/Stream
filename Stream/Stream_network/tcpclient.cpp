﻿#include "tcpclient.h"
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
    ui->serverIPLineEdit->setText(QString("127.0.0.1"));
    ui->userNameLineEdit->setText(QString("Tom"));
    connect(ui->enterPushBotton,SIGNAL(clicked()),this,SLOT(slotEnter()));
    connect(ui->sendPushButton,SIGNAL(clicked()),this,SLOT(slotSend()));

    ui->sendPushButton->setEnabled(false);
}
void TcpClient::dataReceived()
{
    //这里是客户端真正收到信息并且展示的地方
    while (tcpSocket->bytesAvailable())
    {
        QByteArray datagram;
        datagram.resize(tcpSocket->bytesAvailable());

        tcpSocket->read(datagram.data(),datagram.size());
//        QString::fromLocal8Bit
        QString msg=( datagram.data());
        ui->contentListWidget->addItem(msg);
    }
}
void TcpClient::slotDisconnected()
{
    ui->sendPushButton->setEnabled(false);
    ui->enterPushBotton->setText(u8"进入聊天室");
}
void TcpClient::slotSend()
{
    if(ui->sendLineEdit->text()=="")
    {
        return;
    }
    QString msg=userName+":"+ui->sendLineEdit->text();
    QByteArray bytes = msg.toUtf8();
//    std::string message=msg.toStdString();
//    const char * ch=message.c_str();
//    tcpSocket->write(ch,message.length());
    tcpSocket->write(bytes);
    ui->sendLineEdit->clear();
}
void TcpClient::slotConnected()
{
    ui->sendPushButton->setEnabled(true);
    ui->enterPushBotton->setText(u8"离开");

    int length=0;
    QString msg=userName+u8"进入了房间";
//    qDebug()<<msg;
//    std::string message=msg.toStdString();
//    qDebug()<<message;
//    const char * ch=message.c_str();
    QByteArray bytes = msg.toUtf8();
    tcpSocket->write(bytes);
//    qDebug()<<ch;
//    if((length=tcpSocket->write(ch,message.length()))!=message.length())
//    {
//        return;
//    }
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

            QMessageBox::information(this,u8"警告信息",u8"你的 server ip address error!");
            return;
        }
        //检查用户名是否为空
        if(ui->userNameLineEdit->text()=="")
        {
            QMessageBox::information(this,u8"警告信息",u8"你的User name error!");
            return;
        }

        userName=ui->userNameLineEdit->text();

        //新建一个socket 顺便把槽连起来
        tcpSocket=new QTcpSocket(this);

        connect(tcpSocket,SIGNAL(connected()),this,SLOT(slotConnected()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
        connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(dataReceived()));

        //与服务器相连接
        tcpSocket->connectToHost(*serverIP,port);

        status=true;


    }

    else
    {
        int length=0;
        QString msg=userName+u8"离开了房间";
        QByteArray bytes = msg.toUtf8();
        tcpSocket->write(bytes);
//        std::string message=msg.toStdString();
//        const char * ch=message.c_str();

//        //通知服务器我要离开房间了
//        if((length=tcpSocket->write(ch,message.length()))!=message.length())
//        {
//            return;
//        }
        //断开后会发出disconnected的信号
        tcpSocket->disconnectFromHost();

        status=false;
    }

}
TcpClient::~TcpClient()
{
    delete ui;
}
