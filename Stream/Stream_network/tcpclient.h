#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QDialog>
#include <QHostAddress>
#include <QTcpSocket>
#include <QMessageBox>
#include <QHostInfo>
#include <QObject>
#include  <string>
#include <QDebug>
#include <QtDebug>
namespace Ui {
class TcpClient;
}
/**
 * @brief The TcpClient class
 * 此类负责客户端的全部
 * 包括逻辑和界面
 */
class TcpClient : public QDialog
{
    Q_OBJECT

public:
    explicit TcpClient(QWidget *parent = nullptr);
    ~TcpClient();


public slots:
    void slotEnter();
    void slotConnected();
    void slotDisconnected();
    void dataReceived();
    void slotSend();
private:
    Ui::TcpClient *ui;
    bool status;
    int port;
private:
    QHostAddress *serverIP;
    QString userName;
    QTcpSocket *tcpSocket;
};

#endif // TCPCLIENT_H
