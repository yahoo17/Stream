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


void Stream_hall::pageSwitchDaemon()
{
    clock_t start,end;
    circularlist stack(0,1);

    while(1)
    {
        start=clock();
        ui->stackedWidget->setCurrentIndex(stack.getNextNode()->value);
        ui->stackedWidget_2->setCurrentIndex(stack.getNextNode()->value);
        ui->stackedWidget_3->setCurrentIndex(stack.getNextNode()->value);

        end=clock();

    }

}

void pageSwitchDaemon::run()
{


}

void Stream_hall::on_pushButton_clicked()
{
    circularlist stack(0,1);


     ui->stackedWidget->setCurrentIndex(stack.getNextNode()->value);
     ui->stackedWidget_2->setCurrentIndex(stack.getNextNode()->value);
     ui->stackedWidget_3->setCurrentIndex(stack.getNextNode()->value);


}
