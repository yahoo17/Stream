#include "stream_switchpage.h"

Stream_SwitchPage::Stream_SwitchPage()
{
    hallInstance=new Stream_hall();
    hallInstance->show();
}

Stream_SwitchPage::~Stream_SwitchPage()
{
    delete  hallInstance;
    hallInstance=nullptr;
}

