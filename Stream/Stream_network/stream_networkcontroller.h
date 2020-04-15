#ifndef STREAM_NETWORKCONTROLLER_H
#define STREAM_NETWORKCONTROLLER_H
#include "Stream_network/tcpclient.h"
#include "Stream_network/tcpserver.h"

class Stream_NetworkController
{
public:
    Stream_NetworkController();
public:
    TcpClient * tcpclient;
    TcpServer * tcpserver;
    Stream_NetworkController * m_instance;
public:
    Stream_NetworkController * getInstance();

};

#endif // STREAM_NETWORKCONTROLLER_H
