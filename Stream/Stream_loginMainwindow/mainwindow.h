#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Stream_globaldata/stream_globaldata.h"
#include "Stream_network/tcpserver.h"
#include "Stream_network/tcpclient.h"
#include "stream_loginsaving.h"
#include "Stream_hall/stream_switchpage.h"
#include <QMainWindow>
#include <string>
#include <QMessageBox>
#include "../filedownloader.h"
#include <QPainter>
using namespace  std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class
 * 是登陆界面的 注册/登陆的类
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public:
    string getAccountName()const;
    string getPassword()const;
    QString getLoginUserName();
    QString getLoginPassword();
    void paintEvent(QPaintEvent* event);



private slots:
    void on_SignUp_2_clicked();
    void on_adminPushButton_clicked();

    void gotoadmin();
private:
    QPixmap buttonImage;
    Stream_SwitchPage * hallDaemonInstance;
    QTimer * m_timer;

};
#endif // MAINWINDOW_H
