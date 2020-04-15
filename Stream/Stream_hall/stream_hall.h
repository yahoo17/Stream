#ifndef STREAM_HALL_H
#define STREAM_HALL_H

#include <QDialog>
#include "ui_stream_hall.h"
#include "Stream_network/tcpserver.h"
#include "Stream_network/tcpclient.h"
#include "Stream_network/stream_networkcontroller.h"
namespace Ui {
class Stream_hall;
}

class Stream_hall : public QDialog
{
    Q_OBJECT

public:
    explicit Stream_hall(QWidget *parent = nullptr);
    ~Stream_hall();

private slots:
    void on_createRoomPushButton_clicked();

    void on_enterRoomPushButton_clicked();

private:
    TcpServer * tcpserver;
    TcpClient * tcpclient;
    Ui::Stream_hall *ui;
};

#endif // STREAM_HALL_H
