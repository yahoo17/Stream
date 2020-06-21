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
    QSqlQuery query;
    query.exec("create table game(id int primary key,name varchar,publish_year int,score int )");
    query.exec("insert into game values(1,'SAO',2011,9)");
    query.exec("insert into game values(2,'clash of clans',2012,7)");
    query.exec("insert into game values(3,'LOL',2015,5)");

    return true;
}

//class Stream_DatabaseController
//{
//public:
//    Stream_DatabaseController();
//    void func();
//};

#endif // STREAM_DATABASECONTROLLER_H
