#include "stream_switchpage.h"

Stream_SwitchPage::Stream_SwitchPage()
{
    init();
}
Stream_SwitchPage::~Stream_SwitchPage()
{
    delete  hallInstance;
    hallInstance=nullptr;
}

void Stream_SwitchPage::init()
{
    hallInstance=new Stream_hall();
    hallInstance->show();
}

