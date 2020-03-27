﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stream_globaldata.h"
#include "Stream_network/tcpserver.h"
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
    TcpServer * tcpServer;
public:
    string getAccountName()const;
    string getPassword()const;
private slots:
    void on_SignUp_2_clicked();

    void on_adminPushButton_clicked();
};
#endif // MAINWINDOW_H
