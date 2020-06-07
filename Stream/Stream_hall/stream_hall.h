#ifndef STREAM_HALL_H
#define STREAM_HALL_H

#include <QDialog>
#include "ui_stream_hall.h"
#include "Stream_network/tcpserver.h"
#include "Stream_network/tcpclient.h"
#include "Stream_network/stream_networkcontroller.h"
#include <QTimer>
#include "Stream_globaldata/stream_datastructure.h"
#include "Stream_globaldata/stream_globaldata.h"
#include <QThread>
namespace Ui {
class Stream_hall;
}

class Stream_hall : public QDialog
{
    Q_OBJECT

public:
    //explicit
    Stream_hall(QWidget *parent = nullptr);
    ~Stream_hall();

private slots:
    void on_createRoomPushButton_clicked();
    void on_enterRoomPushButton_clicked();

    void on_pushButton_clicked();
    void download();


public slots:

    void switchPage();

public:
    Ui::Stream_hall *ui;
private:
    QTimer * m_timer;
    TcpServer * tcpserver;
    TcpClient * tcpclient;
    circularlist *two;
    circularlist *three;
    circularlist *one;
    circularlist *four;
};

#endif // STREAM_HALL_H
