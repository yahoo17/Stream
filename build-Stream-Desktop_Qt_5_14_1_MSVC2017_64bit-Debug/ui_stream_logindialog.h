/********************************************************************************
** Form generated from reading UI file 'stream_logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAM_LOGINDIALOG_H
#define UI_STREAM_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stream_LOGINDIALOG
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Stream_LOGINDIALOG)
    {
        if (Stream_LOGINDIALOG->objectName().isEmpty())
            Stream_LOGINDIALOG->setObjectName(QString::fromUtf8("Stream_LOGINDIALOG"));
        Stream_LOGINDIALOG->resize(803, 704);
        verticalLayoutWidget = new QWidget(Stream_LOGINDIALOG);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 430, 160, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Stream_LOGINDIALOG);

        QMetaObject::connectSlotsByName(Stream_LOGINDIALOG);
    } // setupUi

    void retranslateUi(QDialog *Stream_LOGINDIALOG)
    {
        Stream_LOGINDIALOG->setWindowTitle(QCoreApplication::translate("Stream_LOGINDIALOG", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Stream_LOGINDIALOG", " \347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Stream_LOGINDIALOG", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Stream_LOGINDIALOG", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stream_LOGINDIALOG: public Ui_Stream_LOGINDIALOG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAM_LOGINDIALOG_H
