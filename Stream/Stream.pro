                                                                                                                                                                                                                                                                                                               QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += network
QT += sql
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Stream_database/stream_databasecontroller.cpp \
    Stream_globaldata/stream_datastructure.cpp \
    Stream_hall/stream_hall.cpp \
    Stream_hall/stream_switchpage.cpp \
    Stream_manager/stream_manageer.cpp \
    Stream_network/server.cpp \
    Stream_network/stream_networkinfo.cpp \
    Stream_network/tcpclient.cpp \
    Stream_network/tcpclientsocket.cpp \
    Stream_network/tcpserver.cpp \
    Stream_loginMainwindow/mainwindow.cpp \
    Stream_loginMainwindow/stream_loginsaving.cpp \
    Stream_globaldata/stream_globaldata.cpp \
    filedownloader.cpp \
    main.cpp
HEADERS += \
    Stream_database/stream_databasecontroller.h \
    Stream_globaldata/stream_datastructure.h \
    Stream_hall/stream_hall.h \
    Stream_hall/stream_switchpage.h \
    Stream_manager/stream_manageer.h \
    Stream_network/server.h \
    Stream_network/stream_networkinfo.h \
    Stream_network/tcpclient.h \
    Stream_network/tcpclientsocket.h \
    Stream_network/tcpserver.h \
    Stream_loginMainwindow/mainwindow.h \
    Stream_loginMainwindow/stream_loginsaving.h \
    Stream_globaldata/stream_globaldata.h \ \
    filedownloader.h


FORMS += \
    Stream_hall/stream_hall.ui \
    Stream_manager/stream_manageer.ui \
    Stream_network/tcpclient.ui \
    Stream_network/tcpserver.ui \
    Stream_loginMainwindow/mainwindow.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Stream_resouce.qrc
