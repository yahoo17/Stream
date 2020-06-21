#ifndef STREAM_GLOBALDATA_H
#define STREAM_GLOBALDATA_H
#include <string>
#include <fstream>
#include <QFile>
#include <QApplication>
#include <Stream_network/stream_networkinfo.h>
using namespace  std;

/**
 * @brief The Stream_GLOBALDATA class
 * 负责管理global_data
 * 是单例模式
 * 拥有账号 密码 IP地址等接口
 */

class Stream_GLOBALDATA
{
public:
    Stream_GLOBALDATA();
public:
    static Stream_GLOBALDATA * m_instance;
    static Stream_GLOBALDATA * getInstance();
    static QString getIPAddress();

public:
    string  *currentAccountNumber;
    string * currentPassword;
};


#endif // STREAM_GLOBALDATA_H
