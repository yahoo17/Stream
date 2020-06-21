#ifndef STREAM_NETWORKINFO_H
#define STREAM_NETWORKINFO_H

#include <QList>
#include <QHostInfo>
#include<QNetworkInterface>
/**
 * @brief The Stream_networkInfo class
 * 这里实现了一下工具方法
 */
class Stream_networkInfo
{
public:
    Stream_networkInfo();
    static QString getIP();
    static QString getIPAddress();
    static QString getIp();
};

#endif // STREAM_NETWORKINFO_H
