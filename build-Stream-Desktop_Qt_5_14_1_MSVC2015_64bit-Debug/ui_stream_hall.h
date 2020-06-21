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
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stream_hall
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGraphicsView *graphicsView;
    QWidget *page_11;
    QGraphicsView *graphicsView_2;
    QWidget *page_4;
    QGraphicsView *graphicsView_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QWidget *page_6;
    QGraphicsView *graphicsView_4;
    QStackedWidget *stackedWidget_3;
    QWidget *page_7;
    QGraphicsView *graphicsView_6;
    QWidget *page_8;
    QGraphicsView *graphicsView_5;
    QStackedWidget *stackedWidget_4;
    QWidget *page_9;
    QGraphicsView *graphicsView_9;
    QWidget *page_10;
    QGraphicsView *graphicsView_10;
    QGraphicsView *graphicsView_7;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label;
    QGraphicsView *graphicsView_8;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *createRoomPushButton;
    QPushButton *enterRoomPushButton;
    QTreeWidget *treeWidget;
    QDial *dial;
    QPushButton *enterRoomPushButton_2;

    void setupUi(QDialog *Stream_hall)
    {
        if (Stream_hall->objectName().isEmpty())
            Stream_hall->setObjectName(QString::fromUtf8("Stream_hall"));
        Stream_hall->resize(1207, 781);
        scrollArea = new QScrollArea(Stream_hall);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(120, 70, 871, 651));
        scrollArea->setMaximumSize(QSize(4000, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 869, 649));
        scrollAreaWidgetContents->setMaximumSize(QSize(40000, 1500));
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(60, 20, 671, 301));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        graphicsView = new QGraphicsView(page_3);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 661, 281));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/image/PUBG.jpg);"));
        stackedWidget->addWidget(page_3);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        graphicsView_2 = new QGraphicsView(page_11);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(0, 0, 661, 281));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/gta.jpg);"));
        stackedWidget->addWidget(page_11);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        graphicsView_3 = new QGraphicsView(page_4);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(-30, -10, 781, 291));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-image: url(:/image/human_fall.jpg);"));
        stackedWidget->addWidget(page_4);
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 791, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/gta.jpg);"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        graphicsView_4 = new QGraphicsView(page_6);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(0, 10, 256, 192));
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-image: url(:/image/PUBG.jpg);"));
        stackedWidget_2->addWidget(page_6);

        horizontalLayout->addWidget(stackedWidget_2);

        stackedWidget_3 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        graphicsView_6 = new QGraphicsView(page_7);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(0, 10, 256, 192));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524130000.png);"));
        stackedWidget_3->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        graphicsView_5 = new QGraphicsView(page_8);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(0, 0, 256, 192));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524130006.png);"));
        stackedWidget_3->addWidget(page_8);

        horizontalLayout->addWidget(stackedWidget_3);

        stackedWidget_4 = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget_4->setObjectName(QString::fromUtf8("stackedWidget_4"));
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        graphicsView_9 = new QGraphicsView(page_9);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(0, 0, 256, 192));
        graphicsView_9->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524130707.png);"));
        stackedWidget_4->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        graphicsView_10 = new QGraphicsView(page_10);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(0, 0, 256, 192));
        graphicsView_10->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524130717.png);"));
        stackedWidget_4->addWidget(page_10);

        horizontalLayout->addWidget(stackedWidget_4);

        graphicsView_7 = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(10, 480, 521, 211));
        graphicsView_7->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524125001.png);"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 670, 75, 23));
        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 700, 791, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 480, 231, 171));
        label->setAutoFillBackground(true);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setScaledContents(false);
        label->setWordWrap(true);
        graphicsView_8 = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(10, 720, 541, 361));
        graphicsView_8->setStyleSheet(QString::fromUtf8("background-image: url(:/image/QQ\346\210\252\345\233\27620200524130319.png);"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 730, 231, 171));
        label_2->setAutoFillBackground(true);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);
        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 1020, 75, 23));
        scrollArea->setWidget(scrollAreaWidgetContents);
        createRoomPushButton = new QPushButton(Stream_hall);
        createRoomPushButton->setObjectName(QString::fromUtf8("createRoomPushButton"));
        createRoomPushButton->setGeometry(QRect(1030, 190, 131, 91));
        enterRoomPushButton = new QPushButton(Stream_hall);
        enterRoomPushButton->setObjectName(QString::fromUtf8("enterRoomPushButton"));
        enterRoomPushButton->setGeometry(QRect(1030, 330, 131, 91));
        treeWidget = new QTreeWidget(Stream_hall);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
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
        dial->setGeometry(QRect(970, 0, 50, 64));
        enterRoomPushButton_2 = new QPushButton(Stream_hall);
        enterRoomPushButton_2->setObjectName(QString::fromUtf8("enterRoomPushButton_2"));
        enterRoomPushButton_2->setGeometry(QRect(1030, 470, 131, 91));

        retranslateUi(Stream_hall);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);
        stackedWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Stream_hall);
    } // setupUi

    void retranslateUi(QDialog *Stream_hall)
    {
        Stream_hall->setWindowTitle(QCoreApplication::translate("Stream_hall", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Stream_hall", "\347\253\213\345\215\263\344\270\213\350\275\275", nullptr));
        label->setText(QCoreApplication::translate("Stream_hall", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\347\276\216\346\234\257\357\274\214\345\245\275\357\274\201 \345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\345\211\247\346\203\205\357\274\214\345\267\256\357\274\201 \345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\351\237\263\344\271\220\357\274\232\345\245\275\345\220\254\357\274\201 \345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\345\211\247\346\203\205\357\274\232\347\213\227\345\261\216\357\274\201 \345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\350\256\276\345\256\232\357\274\232\346\234\211\350\266\243\357\274\201 \345\246\204\346\203\263\347\240\264\347\273\275\347\232\204\345\211\247\346\203\205\357\274\232\345\202\273\351\200\274\357\274\201 \347\272\270\347\211\207\344\272\272\347\232\204\344\272\272\350\256\276\357\274\232\351\245\261\346\273\241\347\233\233\344\270\234\346\234\211\344\270\252\346\200\247\343\200\202 \345\261\221\344"
                        "\270\273\350\247\222\347\232\204\344\272\272\350\256\276\357\274\232\347\203\202\344\277\227\346\201\266\345\277\203\346\227\240\344\270\213\351\231\220\343\200\202 \346\200\273\347\273\223\344\270\200\345\217\245\350\257\235\357\274\232\347\274\226\345\211\247\344\275\240\350\203\275\344\270\215\350\203\275\345\216\273\346\255\273\344\270\200\346\255\273\345\225\212\357\274\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Stream_hall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt;\">\346\210\221\357\274\214\344\272\246\345\244\251\345\207\233\357\274\214\350\242\253\344\272\272\350\264\264\344\270\212\344\272\206\346\211\200\350\260\223\344\270\215\350\211\257\345\255\246\347\224\237\347\232\204\346\240\207\347\255\276\343\200\202</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Stream_hall", "\347\253\213\345\215\263\344\270\213\350\275\275", nullptr));
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

        enterRoomPushButton_2->setText(QCoreApplication::translate("Stream_hall", "\346\270\270\346\210\217\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stream_hall: public Ui_Stream_hall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAM_HALL_H
