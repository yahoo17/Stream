#include "tcpclientsocket.h"

TcpClientSocket::TcpClientSocket(QObject *parent)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(dataReceived()));
    connect(this,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));

}

void TcpClientSocket::dataReceived()
{
    while (bytesAvailable()>0)
    {

        int length=bytesAvailable();
//        char buffer[1024];

//        read(buffer,length);

        QByteArray bytes=readAll();


        QString msg=bytes;
        emit updateClients(msg,length);


    }
}

void TcpClientSocket::slotDisconnected()
{
    emit intdisconnected(this->socketDescriptor());
}
