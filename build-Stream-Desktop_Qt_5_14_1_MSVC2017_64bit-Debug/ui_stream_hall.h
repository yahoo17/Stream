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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stream_hall
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_2;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QOpenGLWidget *openGLWidget;
    QCalendarWidget *calendarWidget;
    QWidget *page_4;
    QOpenGLWidget *openGLWidget_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QPushButton *pushButton_3;
    QWidget *page_6;
    QPushButton *pushButton_4;
    QStackedWidget *stackedWidget_3;
    QWidget *page_7;
    QPushButton *pushButton_5;
    QWidget *page_8;
    QPushButton *pushButton_6;
    QStackedWidget *stackedWidget_4;
    QWidget *page_9;
    QPushButton *pushButton_7;
    QWidget *page_10;
    QPushButton *pushButton_8;
    QPushButton *createRoomPushButton;
    QPushButton *enterRoomPushButton;
    QTreeWidget *treeWidget;
    QDial *dial;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QDialog *Stream_hall)
    {
        if (Stream_hall->objectName().isEmpty())
            Stream_hall->setObjectName(QString::fromUtf8("Stream_hall"));
        Stream_hall->resize(965, 720);
        scrollArea = new QScrollArea(Stream_hall);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(110, 60, 701, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 659));
        toolBox = new QToolBox(scrollAreaWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 470, 671, 121));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 671, 69));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 20, 75, 23));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 671, 69));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 20, 75, 23));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 491, 301));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        openGLWidget = new QOpenGLWidget(page_3);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 10, 411, 241));
        calendarWidget = new QCalendarWidget(page_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(50, 30, 248, 183));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        openGLWidget_2 = new QOpenGLWidget(page_4);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(30, 30, 381, 211));
        stackedWidget->addWidget(page_4);
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 661, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButton_3 = new QPushButton(page_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 30, 75, 23));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        pushButton_4 = new QPushButton(page_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 70, 75, 23));
        stackedWidget_2->addWidget(page_6);

        horizontalLayout->addWidget(stackedWidget_2);

        stackedWidget_3 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        pushButton_5 = new QPushButton(page_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 20, 75, 23));
        stackedWidget_3->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        pushButton_6 = new QPushButton(page_8);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 90, 75, 23));
        stackedWidget_3->addWidget(page_8);

        horizontalLayout->addWidget(stackedWidget_3);

        stackedWidget_4 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_4->setObjectName(QString::fromUtf8("stackedWidget_4"));
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        pushButton_7 = new QPushButton(page_9);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 70, 75, 23));
        stackedWidget_4->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        pushButton_8 = new QPushButton(page_10);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 70, 75, 23));
        stackedWidget_4->addWidget(page_10);

        horizontalLayout->addWidget(stackedWidget_4);

        scrollArea->setWidget(scrollAreaWidgetContents);
        createRoomPushButton = new QPushButton(Stream_hall);
        createRoomPushButton->setObjectName(QString::fromUtf8("createRoomPushButton"));
        createRoomPushButton->setGeometry(QRect(820, 180, 131, 91));
        enterRoomPushButton = new QPushButton(Stream_hall);
        enterRoomPushButton->setObjectName(QString::fromUtf8("enterRoomPushButton"));
        enterRoomPushButton->setGeometry(QRect(820, 380, 131, 91));
        treeWidget = new QTreeWidget(Stream_hall);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 60, 111, 551));
        dial = new QDial(Stream_hall);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(710, 0, 50, 64));
        dateTimeEdit = new QDateTimeEdit(Stream_hall);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(770, 20, 194, 22));

        retranslateUi(Stream_hall);

        toolBox->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);
        stackedWidget_3->setCurrentIndex(1);
        stackedWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Stream_hall);
    } // setupUi

    void retranslateUi(QDialog *Stream_hall)
    {
        Stream_hall->setWindowTitle(QCoreApplication::translate("Stream_hall", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Stream_hall", "\344\270\213\350\275\275", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Stream_hall", "Page 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Stream_hall", "\344\270\213\350\275\275", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Stream_hall", "Page 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Stream_hall", "PushButton", nullptr));
        createRoomPushButton->setText(QCoreApplication::translate("Stream_hall", "\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        enterRoomPushButton->setText(QCoreApplication::translate("Stream_hall", "\350\277\233\345\205\245\346\210\277\351\227\264", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Stream_hall", "\346\210\221\347\232\204\346\270\270\346\210\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Stream_hall", "\346\254\242\344\271\220\346\226\227\345\234\260\344\270\273", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Stream_hall", "\346\214\211\347\261\273\345\236\213\346\265\217\350\247\210", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Stream_hall", "\345\205\215\350\264\271", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Stream_hall", "\344\274\221\351\227\262", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Stream_hall", "\344\275\223\350\202\262", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Stream_hall", "\345\206\222\351\231\251", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem2->child(4);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Stream_hall", "\347\255\226\347\225\245", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem2->child(5);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Stream_hall", "\347\253\236\351\200\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem2->child(6);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Stream_hall", "\344\274\221\351\227\262", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Stream_hall: public Ui_Stream_hall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAM_HALL_H
