#include "stream_databasecontroller.h"

Stream_DatabaseController::Stream_DatabaseController()
{
    QString hostName="localhost";
    QString dbName="spj";
    QString userName="root";
    QString password="123456";
    QSqlDatabase  mysqlDB=QSqlDatabase::addDatabase("QSQLITE");
    mysqlDB.setHostName(hostName);
    mysqlDB.setDatabaseName(dbName);
    mysqlDB.setUserName(userName);
    mysqlDB.setPassword(password);
    if(mysqlDB.open())
    {
        qDebug()<<"success open";

    }
    else
    {
        qDebug()<<"fail";
    }
    QSqlQuery query;
    bool success=query.exec("create table userINFO(id int primary key,name varchar,password varchar)");
    if(success)
    {
        qDebug()<<"success create";

    }
    else
    {
        qDebug()<<"fail";
        QSqlError lastError=query.lastError();
        qDebug()<<lastError.driverText()<<QString("创建表失败");
    }
    query.prepare("insert into userINFO values(:id,:name,:password )");
    query.bindValue(":id","0001");
    query.bindValue(":name","yanhao");
    query.bindValue(":password","123456");
    success=query.exec();
    if(success)
    {
        qDebug()<<"success create";

    }
    else
    {
        qDebug()<<"fail";
        QSqlError lastError=query.lastError();
        qDebug()<<lastError.driverText()<<QString("插入失败");
    }
    query.exec("select  * from userINFO");
}

void Stream_DatabaseController::func()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");

        database.setDatabaseName("CashSystem.db");

        if(database.open())
        {
            qDebug()<<"Database Opened";

            QSqlQuery sql_query;
            QString create_sql = "create table member (id int primary key, name varchar(30), address varchar(30))"; //创建数据表
            QString insert_sql = "insert into member values(?,?,?)";    //插入数据

            QString select_all_sql = "select * from member";

            sql_query.prepare(create_sql); //创建表
            if(!sql_query.exec()) //查看创建表是否成功
            {
                qDebug()<<QObject::tr("Table Create failed");
                qDebug()<<sql_query.lastError();
            }
            else
            {
                qDebug()<< "Table Created" ;

                //插入数据
                sql_query.prepare(insert_sql);

                QVariantList GroupIDs;
                GroupIDs.append(0);
                GroupIDs.append(1);
                GroupIDs.append(2);

                QVariantList GroupNames;
                GroupNames.append("hsp");
                GroupNames.append("rl");
                GroupNames.append("spl");

                QVariantList GroupAddress;
                GroupAddress.append("南充");
                GroupAddress.append("宝鸡");
                GroupAddress.append("南充");

                sql_query.addBindValue(GroupIDs);
                sql_query.addBindValue(GroupNames);
                sql_query.addBindValue(GroupAddress);

                if(!sql_query.execBatch())
                {
                    qDebug()<<sql_query.lastError();
                }
                else
                {
                    qDebug()<<"插入记录成功";
                }

                //查询所有记录
                sql_query.prepare(select_all_sql);
                if(!sql_query.exec())
                {
                    qDebug()<<sql_query.lastError();
                }
                else
                {
                    while(sql_query.next())
                    {
                        int id = sql_query.value(0).toInt();
                        QString name = sql_query.value(1).toString();
                        QString address = sql_query.value(2).toString();
                        qDebug()<<QString("ID:%1  Name:%2  Address:%3").arg(id).arg(name).arg(address);
                    }
                }
            }
        }
        database.close();

}
