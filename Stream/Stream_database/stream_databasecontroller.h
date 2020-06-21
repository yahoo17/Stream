#ifndef STREAM_DATABASECONTROLLER_H
#define STREAM_DATABASECONTROLLER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QCoreApplication>
/**
 * @brief The Stream_DatabaseController class
 * 是负责连接管理数据库的类
 * 是否启用还看情况
 */
static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dataPath = QCoreApplication::applicationDirPath()+"/my.db";
    db.setDatabaseName(dataPath);
    if(!db.open())
    {
        QMessageBox::critical(0,"cannot open database","Unable to establish a database connection.",
                              QMessageBox::Cancel);
        return false;
    }
//    QSqlQuery query;
//    query.exec("create table student(id int primary key,name varchar,course int)");
//    query.exec("insert into student values(1,'李强',11)");
//    query.exec("insert into student values(2,'马亮',11)");
//    query.exec("insert into student values(3,'孙红',12)");
//    //创建course表
//    query.exec("create table coures(id int primary key,name varchar,teacher varchar)");
//    query.exec("insert into course values(10,'数学','王老师')");
//    query.exec("insert into course values(10,'英语','张老师')");
//    query.exec("insert into course values(10,'计算机','白老师')");
    return true;
}

class Stream_DatabaseController
{
public:
    Stream_DatabaseController();
    void func();
};

#endif // STREAM_DATABASECONTROLLER_H
