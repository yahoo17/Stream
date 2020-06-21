#ifndef STREAM_DATABASECONTROLLER_H
#define STREAM_DATABASECONTROLLER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

/**
 * @brief The Stream_DatabaseController class
 * 是负责连接管理数据库的类
 * 是否启用还看情况
 */
class Stream_DatabaseController
{
public:
    Stream_DatabaseController();
    void func();
};

#endif // STREAM_DATABASECONTROLLER_H
