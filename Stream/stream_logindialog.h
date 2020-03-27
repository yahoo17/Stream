#ifndef STREAM_LOGINDIALOG_H
#define STREAM_LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class Stream_LOGINDIALOG;
}

class Stream_LOGINDIALOG : public QDialog
{
    Q_OBJECT

public:
    explicit Stream_LOGINDIALOG(QWidget *parent = nullptr);
    ~Stream_LOGINDIALOG();

private:
    Ui::Stream_LOGINDIALOG *ui;
};

#endif // STREAM_LOGINDIALOG_H
