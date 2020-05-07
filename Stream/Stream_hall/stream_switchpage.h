#ifndef STREAM_SWITCHPAGE_H
#define STREAM_SWITCHPAGE_H
#include <QThread>
#include <QTimer>
#include <QEventLoop>
#include "stream_hall.h"
class Stream_SwitchPage:public QThread
{
public:
    Stream_SwitchPage();
private:
    Stream_hall * hallInstance;
public:
    void run() ;
private:
    QTimer * timer;
};

#endif // STREAM_SWITCHPAGE_H
