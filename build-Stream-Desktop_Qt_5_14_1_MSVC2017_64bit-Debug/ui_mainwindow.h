/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *tabWidget;
    QTabWidget *u8;
    QWidget *Login;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *LoginLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *adminPushButton;
    QPushButton *pushButton;
    QWidget *SignUp;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *LoginLayout_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *accountNumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *accountPassword;
    QPushButton *SignUp_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 751, 571));
        u8 = new QTabWidget(tabWidget);
        u8->setObjectName(QString::fromUtf8("u8"));
        u8->setGeometry(QRect(80, 0, 741, 551));
        u8->setStyleSheet(QString::fromUtf8(""));
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        verticalLayoutWidget = new QWidget(Login);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 180, 381, 211));
        LoginLayout = new QVBoxLayout(verticalLayoutWidget);
        LoginLayout->setObjectName(QString::fromUtf8("LoginLayout"));
        LoginLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        LoginLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        LoginLayout->addLayout(horizontalLayout_2);

        adminPushButton = new QPushButton(verticalLayoutWidget);
        adminPushButton->setObjectName(QString::fromUtf8("adminPushButton"));

        LoginLayout->addWidget(adminPushButton);

        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 440, 93, 28));
        u8->addTab(Login, QString());
        SignUp = new QWidget();
        SignUp->setObjectName(QString::fromUtf8("SignUp"));
        verticalLayoutWidget_2 = new QWidget(SignUp);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 180, 381, 211));
        LoginLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        LoginLayout_2->setObjectName(QString::fromUtf8("LoginLayout_2"));
        LoginLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        accountNumber = new QLineEdit(verticalLayoutWidget_2);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));

        horizontalLayout_3->addWidget(accountNumber);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        LoginLayout_2->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        accountPassword = new QLineEdit(verticalLayoutWidget_2);
        accountPassword->setObjectName(QString::fromUtf8("accountPassword"));

        horizontalLayout_4->addWidget(accountPassword);


        LoginLayout_2->addLayout(horizontalLayout_4);

        SignUp_2 = new QPushButton(verticalLayoutWidget_2);
        SignUp_2->setObjectName(QString::fromUtf8("SignUp_2"));

        LoginLayout_2->addWidget(SignUp_2);

        u8->addTab(SignUp, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        u8->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " \350\264\246\345\217\267:    ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " \345\257\206\347\240\201:     ", nullptr));
        adminPushButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257", nullptr));
        u8->setTabText(u8->indexOf(Login), QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " \350\264\246\345\217\267:    ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " \345\257\206\347\240\201:     ", nullptr));
        SignUp_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        u8->setTabText(u8->indexOf(SignUp), QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
