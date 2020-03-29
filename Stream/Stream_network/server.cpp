#include "server.h"

Server::Server(QObject *parent, int port):QTcpServer(parent)
{
    //监听来自任何IP地址的 传到我这指定的端口号
    listen(QHostAddress::Any,port);
}
void Server::incomingConnection(qintptr socketDescriptor)
{
    // 创建一个新的socket与客户端通信
    TcpClientSocket * tcpClientSocket =new TcpClientSocket(this);
    //
    connect(tcpClientSocket,SIGNAL(updateClients(QString ,int)),this,SLOT(updateClients(QString ,int)));
    connect(tcpClientSocket,SIGNAL(intdisconnected(int)),this,SLOT(slotDisconnected(int)));

    if(tcpClientSocket->setSocketDescriptor(socketDescriptor))
    {
        bool test;
    }
    else
        bool  test;
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

    emit updateServer(msg,length);
    //轮询更新每一个服务器这里保存的与客户端的tcpclient连接,这里是正确的
    for(int i=0;i<tcpClientSocketList.count();i++)
    {
        QTcpSocket * item =tcpClientSocketList.at(i);
        QByteArray bytes = msg.toUtf8();

        item->write(bytes);
//        item->write(msg.toLocal8Bit());
        //不知道啥意思
//        std::string message=msg.toStdString();
//        const char * ch=message.c_str();
//        if(item->write(ch,length)!=length)
//        {
//            continue;
//        }
    }
}
