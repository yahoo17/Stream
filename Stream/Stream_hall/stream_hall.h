#ifndef STREAM_HALL_H
#define STREAM_HALL_H

#include <QDialog>
#include "ui_stream_hall.h"
#include "Stream_network/tcpserver.h"
#include "Stream_network/tcpclient.h"
#include "Stream_network/stream_networkcontroller.h"
#include "time.h"
#include "Stream_globaldata/stream_datastructure.h"
#include <QThread>
namespace Ui {
class Stream_hall;
}
class pageSwitchDaemon:public QThread
{
    void run() override;
    friend class Stream_hall;

};

class Stream_hall : public QDialog
{
    Q_OBJECT

public:
    explicit Stream_hall(QWidget *parent = nullptr);
    ~Stream_hall();

private slots:
    void on_createRoomPushButton_clicked();

    void on_enterRoomPushButton_clicked();
    void on_pushButton_clicked();

private:
    void pageSwitchDaemon();//在构造函数之后执行 隔一段时间切换一下页面


public:
    Ui::Stream_hall *ui;
private:
    TcpServer * tcpserver;
    TcpClient * tcpclient;

};

#endif // STREAM_HALL_H
