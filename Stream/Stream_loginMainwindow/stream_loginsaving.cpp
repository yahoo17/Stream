#include "stream_loginsaving.h"
 int  Stream_loginSaving::userCount=0;
Stream_loginSaving::Stream_loginSaving()
{

}

bool Stream_loginSaving::saveOnDisk(string name,string passwd)
{
    QFile data("password.txt");
    if(data.open(QFile::WriteOnly|QFile::Append))
    {
        QTextStream  out(&data);
        QString tempName=QString::fromStdString(name);
        QString tempPassWd=QString::fromStdString(passwd);
        out<<tempName<<"\n"<<tempPassWd<<"\n";
        userCount++;
        return true;
    }
    return false;
}

bool Stream_loginSaving::checkOnDisk(QString name, QString password)
{
    QFile data("password.txt");
    if(data.open(QFile::ReadOnly))
    {
        QTextStream in(&data);
        QString tempName;
        QString tempPassWd;
        in>>tempName;
        in>>tempPassWd;
        if(name==tempName&&password==tempPassWd)
            return true;
    }
    else
        return false;
}
