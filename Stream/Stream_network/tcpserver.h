#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QDialog>
#include <QObject>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include "server.h"
#include "Stream_globaldata/stream_globaldata.h"
#include "stream_networkinfo.h"
namespace Ui {
class TcpServer;
}
/**
 * @brief The TcpServer class
 * 持有Server类对象的实例
 * 是类似于Server的controller
 */
class TcpServer : public QDialog
{
    Q_OBJECT

public:
    explicit TcpServer(QWidget *parent = nullptr);
    ~TcpServer();

private:
    Ui::TcpServer *ui;
private:
    int port;
    Server * server;
public slots:
    void slotCreateServer();
    void updateServer(QString ,int);

};

#endif // TCPSERVER_H
