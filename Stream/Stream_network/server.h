﻿#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include "tcpclientsocket.h"
/**
 * @brief The Server class
 * 实现服务端的逻辑
 */
class Server:public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject *parent=0,int port=0);
    //用来保存每一个与此服务器相连的TcpClientSocket
    QList<TcpClientSocket*> tcpClientSocketList;
signals:
    void updateServer(QString ,int);
public slots:
    void updateClients(QString, int);
    void slotDisconnected(int);
protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // SERVER_H
