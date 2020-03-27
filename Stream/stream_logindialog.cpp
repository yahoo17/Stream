#include "stream_logindialog.h"
#include "ui_stream_logindialog.h"

Stream_LOGINDIALOG::Stream_LOGINDIALOG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stream_LOGINDIALOG)
{
    ui->setupUi(this);
}

Stream_LOGINDIALOG::~Stream_LOGINDIALOG()
{
    delete ui;
}
