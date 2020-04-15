#ifndef STREAM_GLOBALDATA_H
#define STREAM_GLOBALDATA_H
#include <string>
#include <fstream>
#include <QApplication>
using namespace  std;

class Stream_GLOBALDATA
{
public:
    Stream_GLOBALDATA();
public:
    static Stream_GLOBALDATA * m_instance;
    static Stream_GLOBALDATA * getInstance();

public:
    void saveIt();
public:
    string  *currentAccountNumber;
    string * currentPassword;
};

#endif // STREAM_GLOBALDATA_H
