#ifndef STREAM_NETWORKINFO_H
#define STREAM_NETWORKINFO_H

#include <QList>
#include <QHostInfo>
#include<QNetworkInterface>
class Stream_networkInfo
{
public:
    Stream_networkInfo();
    static QString getIP();
    static QString getIPAddress();
    static QString getIp();
};

#endif // STREAM_NETWORKINFO_H
