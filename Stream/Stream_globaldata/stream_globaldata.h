#ifndef STREAM_GLOBALDATA_H
#define STREAM_GLOBALDATA_H
#include <string>
#include <fstream>
#include <QFile>
#include <QApplication>
#include <Stream_network/stream_networkinfo.h>
using namespace  std;


class Stream_GLOBALDATA
{
public:
    Stream_GLOBALDATA();
public:
    static Stream_GLOBALDATA * m_instance;
    static Stream_GLOBALDATA * getInstance();
    static QString getIPAddress();
public:
    void saveIt();
public:
    string  *currentAccountNumber;
    string * currentPassword;
};


#endif // STREAM_GLOBALDATA_H
