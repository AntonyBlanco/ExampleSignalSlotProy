#include "chatwidget.h"
#include "ui_chatwidget.h"

ChatWidget::ChatWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatWidget)
{
    ui->setupUi(this);
}

ChatWidget::~ChatWidget()
{
    delete ui;
}

void ChatWidget::receiveMsg(const QString &str)
{
    ui->plainTextEdit->appendPlainText("\n" + str);
}

void ChatWidget::sendMsg(const QString &str)
{
    emit sendMsgSignal("From Chat: " + str);
}

void ChatWidget::on_pushButton_clicked()
{
    this->sendMsg("Hola buenas tardes");
}

