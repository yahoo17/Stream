#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QDialog>
#include <QObject>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include "server.h"
namespace Ui {
class TcpServer;
}

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
