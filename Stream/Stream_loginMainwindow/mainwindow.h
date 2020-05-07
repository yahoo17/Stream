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

using namespace  std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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
private slots:
    void on_SignUp_2_clicked();
    void on_adminPushButton_clicked();
private:

    Stream_SwitchPage * hallDaemonInstance;

};
#endif // MAINWINDOW_H
