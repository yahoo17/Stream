#ifndef STREAM_MANAGEER_H
#define STREAM_MANAGEER_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QCoreApplication>
#include <QDialog>
#include <QModelIndexList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTableView>
#include <QSqlTableModel>
namespace Ui {
class Stream_manageer;
}
/**
 * @brief The Stream_manageer class
 * 是典型的MVC模式
 * model 也就是我们平时写的类
 * view 是视图 我们看到的界面
 * controller 是控制器 后台逻辑
 */
class Stream_manageer : public QDialog
{
    Q_OBJECT

public:
    explicit Stream_manageer(QWidget *parent = nullptr);
    ~Stream_manageer();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    QSqlTableModel*  model;
    Ui::Stream_manageer *ui;
};

#endif // STREAM_MANAGEER_H
