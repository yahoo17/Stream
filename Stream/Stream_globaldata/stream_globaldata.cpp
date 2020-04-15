#include "stream_globaldata.h"
Stream_GLOBALDATA*  Stream_GLOBALDATA::m_instance=nullptr;
Stream_GLOBALDATA* Stream_GLOBALDATA::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new Stream_GLOBALDATA();
        return m_instance;
    }
    else
        return m_instance;
}

QString Stream_GLOBALDATA::getIPAddress()
{
    return Stream_networkInfo::getIP();
}
Stream_GLOBALDATA::Stream_GLOBALDATA()
{

}

void Stream_GLOBALDATA::saveIt()
{
    fstream file((qApp->applicationDirPath()+"password.txt").toStdString(),ios::trunc|ios::in|ios::out);
    file<<currentAccountNumber<<"\n";
    file<<currentPassword<<"\n";

}
