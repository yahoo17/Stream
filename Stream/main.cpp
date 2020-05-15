#include "Stream_loginMainwindow/mainwindow.h"
#include "Stream_database/stream_databasecontroller.h"
#include <QApplication>
#include  <QDebug>
#include <QtDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Stream_DatabaseController temp;
    temp.func();

    return a.exec();
}
