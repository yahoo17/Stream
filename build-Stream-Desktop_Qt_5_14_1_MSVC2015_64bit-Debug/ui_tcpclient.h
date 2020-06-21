/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *contentListWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *sendLineEdit;
    QPushButton *sendPushButton;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *portLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *serverIPLineEdit;
    QPushButton *enterPushBotton;

    void setupUi(QDialog *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QString::fromUtf8("TcpClient"));
        TcpClient->resize(860, 766);
        gridLayoutWidget = new QWidget(TcpClient);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 661, 671));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        contentListWidget = new QListWidget(gridLayoutWidget);
        contentListWidget->setObjectName(QString::fromUtf8("contentListWidget"));

        gridLayout->addWidget(contentListWidget, 0, 2, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 2, 2, 2, 1);

        sendLineEdit = new QLineEdit(gridLayoutWidget);
        sendLineEdit->setObjectName(QString::fromUtf8("sendLineEdit"));

        gridLayout->addWidget(sendLineEdit, 1, 2, 1, 1);

        sendPushButton = new QPushButton(gridLayoutWidget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));

        gridLayout->addWidget(sendPushButton, 1, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));

        horizontalLayout_3->addWidget(portLineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        userNameLineEdit = new QLineEdit(gridLayoutWidget);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));

        horizontalLayout->addWidget(userNameLineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        serverIPLineEdit = new QLineEdit(gridLayoutWidget);
        serverIPLineEdit->setObjectName(QString::fromUtf8("serverIPLineEdit"));

        horizontalLayout_2->addWidget(serverIPLineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        enterPushBotton = new QPushButton(gridLayoutWidget);
        enterPushBotton->setObjectName(QString::fromUtf8("enterPushBotton"));

        gridLayout_2->addWidget(enterPushBotton, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QDialog *TcpClient)
    {
        TcpClient->setWindowTitle(QCoreApplication::translate("TcpClient", "Dialog", nullptr));
        sendPushButton->setText(QCoreApplication::translate("TcpClient", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("TcpClient", "\347\253\257\345\217\243\345\217\267:", nullptr));
        label->setText(QCoreApplication::translate("TcpClient", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("TcpClient", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
        enterPushBotton->setText(QCoreApplication::translate("TcpClient", "\350\277\233\345\205\245\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
