#ifndef STREAM_SWITCHPAGE_H
#define STREAM_SWITCHPAGE_H
#include <QThread>
#include <QTimer>
#include <QEventLoop>
#include "stream_hall.h"
/**
 * @brief The Stream_SwitchPage class
 * 持有Stream_hall对象
 * 是Stream_hall的管理者
 * 同时其负责实现page switch的功能
 */
class Stream_SwitchPage
{
public:
    Stream_SwitchPage();
    ~Stream_SwitchPage();
    void init();
private:
    Stream_hall * hallInstance;

};

#endif // STREAM_SWITCHPAGE_H
