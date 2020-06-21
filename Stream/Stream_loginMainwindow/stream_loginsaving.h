#ifndef STREAM_LOGINSAVING_H
#define STREAM_LOGINSAVING_H
#include <QFile>
#include <QTextStream>
#include <string>
#include <QMessageBox>
#include "Stream_globaldata/stream_globaldata.h"
/**
 * @brief The Stream_loginSaving class
 * 负责将账号密码持久化保存和检查是否存在
 */
class Stream_loginSaving
{
public:
    Stream_loginSaving();
    static bool saveOnDisk(string a,string b);
    static bool checkOnDisk(QString name,QString passWd);
private:
    static int userCount;
};

#endif // STREAM_LOGINSAVING_H
