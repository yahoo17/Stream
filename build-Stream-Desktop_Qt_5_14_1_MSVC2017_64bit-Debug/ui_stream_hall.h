/********************************************************************************
** Form generated from reading UI file 'stream_hall.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAM_HALL_H
#define UI_STREAM_HALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stream_hall
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *createRoomPushButton;
    QPushButton *enterRoomPushButton;

    void setupUi(QDialog *Stream_hall)
    {
        if (Stream_hall->objectName().isEmpty())
            Stream_hall->setObjectName(QString::fromUtf8("Stream_hall"));
        Stream_hall->resize(965, 720);
        scrollArea = new QScrollArea(Stream_hall);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(60, 60, 751, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 749, 659));
        scrollArea->setWidget(scrollAreaWidgetContents);
        createRoomPushButton = new QPushButton(Stream_hall);
        createRoomPushButton->setObjectName(QString::fromUtf8("createRoomPushButton"));
        createRoomPushButton->setGeometry(QRect(820, 180, 131, 91));
        enterRoomPushButton = new QPushButton(Stream_hall);
        enterRoomPushButton->setObjectName(QString::fromUtf8("enterRoomPushButton"));
        enterRoomPushButton->setGeometry(QRect(820, 380, 131, 91));

        retranslateUi(Stream_hall);

        QMetaObject::connectSlotsByName(Stream_hall);
    } // setupUi

    void retranslateUi(QDialog *Stream_hall)
    {
        Stream_hall->setWindowTitle(QCoreApplication::translate("Stream_hall", "Dialog", nullptr));
        createRoomPushButton->setText(QCoreApplication::translate("Stream_hall", "\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        enterRoomPushButton->setText(QCoreApplication::translate("Stream_hall", "\350\277\233\345\205\245\346\210\277\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stream_hall: public Ui_Stream_hall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAM_HALL_H
