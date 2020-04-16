/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServer
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *portLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *createPushButton;
    QListWidget *ContentListWidget;
    QLabel *label;
    QTextEdit *IPTextEdit;

    void setupUi(QDialog *TcpServer)
    {
        if (TcpServer->objectName().isEmpty())
            TcpServer->setObjectName(QString::fromUtf8("TcpServer"));
        TcpServer->resize(621, 603);
        gridLayoutWidget = new QWidget(TcpServer);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 601, 571));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));

        gridLayout->addWidget(portLineEdit, 4, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 3);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        createPushButton = new QPushButton(gridLayoutWidget);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));

        gridLayout->addWidget(createPushButton, 6, 0, 1, 3);

        ContentListWidget = new QListWidget(gridLayoutWidget);
        ContentListWidget->setObjectName(QString::fromUtf8("ContentListWidget"));
        ContentListWidget->setMaximumSize(QSize(1770, 450));

        gridLayout->addWidget(ContentListWidget, 2, 0, 1, 3);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        IPTextEdit = new QTextEdit(gridLayoutWidget);
        IPTextEdit->setObjectName(QString::fromUtf8("IPTextEdit"));

        gridLayout->addWidget(IPTextEdit, 1, 1, 1, 2);


        retranslateUi(TcpServer);

        QMetaObject::connectSlotsByName(TcpServer);
    } // setupUi

    void retranslateUi(QDialog *TcpServer)
    {
        TcpServer->setWindowTitle(QCoreApplication::translate("TcpServer", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("TcpServer", "                                  TCP Server", nullptr));
        label_3->setText(QCoreApplication::translate("TcpServer", "\344\275\240\347\232\204IP\345\234\260\345\235\200:", nullptr));
        createPushButton->setText(QCoreApplication::translate("TcpServer", "\345\210\233\345\273\272\350\201\212\345\244\251\345\256\244", nullptr));
        label->setText(QCoreApplication::translate("TcpServer", "\347\253\257\345\217\243\345\217\267:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServer: public Ui_TcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
