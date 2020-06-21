/********************************************************************************
** Form generated from reading UI file 'stream_manageer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAM_MANAGEER_H
#define UI_STREAM_MANAGEER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Stream_manageer
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTableView *tableView;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Stream_manageer)
    {
        if (Stream_manageer->objectName().isEmpty())
            Stream_manageer->setObjectName(QString::fromUtf8("Stream_manageer"));
        Stream_manageer->resize(820, 611);
        pushButton = new QPushButton(Stream_manageer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 520, 75, 23));
        pushButton_2 = new QPushButton(Stream_manageer);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 520, 75, 23));
        pushButton_3 = new QPushButton(Stream_manageer);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 520, 75, 23));
        pushButton_4 = new QPushButton(Stream_manageer);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 520, 75, 23));
        pushButton_5 = new QPushButton(Stream_manageer);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(510, 520, 75, 23));
        pushButton_6 = new QPushButton(Stream_manageer);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(610, 520, 75, 23));
        pushButton_7 = new QPushButton(Stream_manageer);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(710, 520, 75, 23));
        tableView = new QTableView(Stream_manageer);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 60, 701, 431));
        pushButton_8 = new QPushButton(Stream_manageer);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(370, 580, 75, 23));
        lineEdit = new QLineEdit(Stream_manageer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 570, 113, 20));
        label = new QLabel(Stream_manageer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 580, 54, 12));

        retranslateUi(Stream_manageer);

        QMetaObject::connectSlotsByName(Stream_manageer);
    } // setupUi

    void retranslateUi(QDialog *Stream_manageer)
    {
        Stream_manageer->setWindowTitle(QCoreApplication::translate("Stream_manageer", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Stream_manageer", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Stream_manageer", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Stream_manageer", "\345\242\236\345\212\240", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Stream_manageer", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Stream_manageer", "\346\214\211id\345\215\207\345\272\217\346\216\222\345\210\227", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Stream_manageer", "\346\214\211id\351\231\215\345\272\217\346\216\222\345\210\227", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Stream_manageer", "\346\237\245\350\257\242", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Stream_manageer", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("Stream_manageer", "\345\220\215\345\255\227:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stream_manageer: public Ui_Stream_manageer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAM_MANAGEER_H
