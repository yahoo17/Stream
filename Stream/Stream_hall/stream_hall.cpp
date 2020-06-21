#include "stream_hall.h"
#include <Windows.h>
#include <stdio.h>
#include  <direct.h>
#pragma comment(lib,"URlmon")
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
    m_timer->start(2700);

    ui->scrollArea->setWidgetResizable(false);
    ui->scrollArea->widget()->resize(3000, 26 * 42 + 25 * 2);
    download();

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

void Stream_hall::download()
{



    char buffer[MAX_PATH];
    _getcwd(buffer, MAX_PATH);
    strcat_s(buffer, "//1.jpg");
    HRESULT Result = URLDownloadToFileA(NULL, "http://112.22.245.11:443/down/de0243d60205717a2a74aea53c0c500c-46353/1.jpg?cts=yd-f-U13274580&ctp=111A23A228A125&ctt=1484747960&limit=1&spd=1300000&ctk=4ab73a4a76e47ad0b181d0f9fc47b6a1&chk=de0243d60205717a2a74aea53c0c500c-46353", buffer, 0, NULL);
    switch (Result)
    {
    case S_OK:printf("The download started successfully.\n");break;
    case E_OUTOFMEMORY: printf("The buffer length is invalid, or there is insufficient memory to complete the operation.\n"); break;
    }
    return ;



}

void Stream_hall::on_enterRoomPushButton_2_clicked()
{
    manager = new Stream_manageer;
    manager->show();
}
