#include "Stream_loginMainwindow/mainwindow.h"

#include <QApplication>
#include  <QDebug>
#include <QtDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
