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
        QString tempName;
        QString tempPassWd;

        QTextStream in(&data);
        in.setAutoDetectUnicode(true);
        while (!in.atEnd()) {
            tempName=in.readLine();
            tempPassWd=in.readLine();
            if(name==tempName&&password==tempPassWd)
                return true;

        }


    }

        return false;
}
