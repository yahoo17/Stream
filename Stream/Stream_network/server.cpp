#include "server.h"

Server::Server(QObject *parent, int port):QTcpServer(parent)
{
    //监听来自任何IP地址的 传到我这指定的端口号
    listen(QHostAddress::Any,port);
}
void Server::incomingConnection(int socketDescriptor)
{
    // 创建一个新的socket与客户端通信
    TcpClientSocket * tcpClientSocket =new TcpClientSocket(this);
    //
    connect(tcpClientSocket,SIGNAL(updateClients(QString ,int)),this,SLOT(updateClients(QString ,int)));
    connect(tcpClientSocket,SIGNAL(disconnected(int)),this,SLOT(disconnected(int)));

    tcpClientSocket->setSocketDescriptor(socketDescriptor);
    tcpClientSocketList.append(tcpClientSocket);

}
void Server::slotDisconnected(int descriptior)
{
    for(int i=0;i<tcpClientSocketList.count();i++)
    {
        QTcpSocket * item =tcpClientSocketList.at(i);
        if(item->socketDescriptor()==descriptior)
        {
            //这里remove行不行
            tcpClientSocketList.removeAt(i);
            return;
        }
    }
    return;
}
void Server::updateClients(QString msg,int length)
{

    emit    updateServer(msg,length);
    for(int i=0;i<tcpClientSocketList.count();i++)
    {
        QTcpSocket * item =tcpClientSocketList.at(i);
        //不知道啥意思
        if(item->write(msg.toLatin1(),length)!=length)
        {
            continue;
        }
    }
}
