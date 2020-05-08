#include "stream_hall.h"

Stream_hall::Stream_hall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stream_hall)
{
    ui->setupUi(this);
    two=new circularlist(0,1);
    three=new circularlist(0,1);
    one=new circularlist(0,1);
    four=new circularlist(0,1);
    m_timer=new QTimer(this);
    connect(m_timer,SIGNAL(timeout()),this,SLOT(switchPage()));
    m_timer->start(2500);
}


Stream_hall::~Stream_hall()
{
    delete ui;
    delete  two;
    delete three;
    two=nullptr;
    three=nullptr;
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

void Stream_hall::switchPage()
{

    ui->stackedWidget_2->setCurrentIndex(one->getNextNode()->value);
    ui->stackedWidget_3->setCurrentIndex(two->getNextNode()->value);
    ui->stackedWidget_4->setCurrentIndex(three->getNextNode()->value);
    ui->stackedWidget->setCurrentIndex(four->getNextNode()->value);

}



void Stream_hall::on_pushButton_clicked()
{

}
