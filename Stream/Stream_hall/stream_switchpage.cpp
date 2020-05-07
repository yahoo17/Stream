#include "stream_switchpage.h"

Stream_SwitchPage::Stream_SwitchPage()
{
    hallInstance=new Stream_hall();
    hallInstance->show();

//    timer=new QTimer();
//    connect(timer,SIGNAL(timeout()),hallInstance,SLOT(hallInstance->switchPage()));
//    timer->start(1000);


}

void Stream_SwitchPage::run()
{

}
