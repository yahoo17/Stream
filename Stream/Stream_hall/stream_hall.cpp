#include "stream_hall.h"

Stream_hall::Stream_hall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stream_hall)
{
    ui->setupUi(this);
}

Stream_hall::~Stream_hall()
{
    delete ui;
}

void Stream_hall::on_createRoomPushButton_clicked()
{
    tcpserver=new TcpServer();
    tcpserver->show();
}

void Stream_hall::on_enterRoomPushButton_clicked()
{
    tcpclient=new TcpClient();
    tcpclient->show();
}
