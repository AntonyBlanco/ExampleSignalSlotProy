#include "serverwidget.h"
#include "ui_serverwidget.h"

ServerWidget::ServerWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);
}

ServerWidget::~ServerWidget()
{
    delete ui;
}

void ServerWidget::receiveMsg(const QString &str)
{
    ui->plainTextEdit->appendPlainText("\n" + str);
}

void ServerWidget::sendMsg(const QString &str)
{
    emit sendMsgSignal("From Server: " + str);
}

void ServerWidget::on_pushButton_clicked()
{
    this->sendMsg("Bienvenidos al servidor de signals");
}

