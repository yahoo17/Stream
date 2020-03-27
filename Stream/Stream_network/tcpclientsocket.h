#ifndef TCPCLIENTSOCKET_H
#define TCPCLIENTSOCKET_H
#include <QTcpSocket>
#include <QObject>

class TcpClientSocket : public QTcpSocket
{
    Q_OBJECT
public:
    TcpClientSocket(QObject * parent=0);
signals:
    void updateClients(QString ,int);
    void disconnected(int);
protected slots:
    //用来处理客户端收到数据的函数
    void dataReceived();
    //用来处理断开连接的具体函数
    void slotDisconnected();
};

#endif // TCPCLIENTSOCKET_H
