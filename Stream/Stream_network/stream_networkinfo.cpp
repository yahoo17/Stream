#include "stream_networkinfo.h"

Stream_networkInfo::Stream_networkInfo()
{

}

QString Stream_networkInfo::getIP()
{
    QString localHostName=QHostInfo::localHostName();

    QHostInfo hostInfo=QHostInfo::fromName(localHostName);
    QList<QHostAddress> listAddress = hostInfo.addresses();

    if(!listAddress.isEmpty())
    {
        return listAddress.first().toString();
    }
}
QString Stream_networkInfo::getIp()
{
    QString temp;
    QList<QHostAddress> list=QNetworkInterface::allAddresses();
    for(auto x:list)
    {

        if(x.protocol()==QAbstractSocket::IPv4Protocol)
        {
            temp+=x.toString()+"\n";
        }
    }
    return  temp;
}
QString Stream_networkInfo::getIPAddress()
{
    QList<QNetworkInterface> list=QNetworkInterface::allInterfaces();
    for(int i=0;i<list.count();i++)
    {
        QNetworkInterface interface=list.at(i);
        QList<QNetworkAddressEntry> entryList =interface.addressEntries();
        for(int j=0;j<entryList.count();j++)
        {
            QNetworkAddressEntry entry=entryList.at(j);
            return entry.ip().toString();
        }
    }
}
