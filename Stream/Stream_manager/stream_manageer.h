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
