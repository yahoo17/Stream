#include "tcpserver.h"
#include "ui_tcpserver.h"

TcpServer::TcpServer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TcpServer)
{
    ui->setupUi(this);
    port=8010;
    ui->portLineEdit->setText(QString::number(port));
    connect(ui->createPushButton,SIGNAL(clicked()),this,SLOT(slotCreateServer()));
}
void TcpServer::slotCreateServer()
{
    server=new Server(this,port);
    connect(server,SIGNAL(updateServer(QString ,int)),this,SLOT(updateServer(QString,int)));
    ui->createPushButton->setEnabled(false);

}
void TcpServer::updateServer(QString msg,int length)
{
    ui->ContentListWidget->addItem(msg);
}
TcpServer::~TcpServer()
{

    delete ui;
}

