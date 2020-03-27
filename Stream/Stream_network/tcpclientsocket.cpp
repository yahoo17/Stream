#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    connect(this,SIGNAL(readRead()),this,SLOT(dataReceived()));
    connect(this,SIGNAL(disconnect()),this,SLOT(slotDisconnected()));

}

void TcpClientSocket::dataReceived()
{
    while (bytesAvailable()>0)
    {
        int length=bytesAvailable();
        char buffer[1024];
        read(buffer,length);

        QString msg=buffer;
        emit updateClients(msg,length);


    }
}

void TcpClientSocket::slotDisconnected()
{
    emit disconnected(this->socketDescriptor());
}
