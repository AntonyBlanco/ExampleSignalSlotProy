#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chat_inst = new ChatWidget(this);
    chat_inst->show();
    sevr_inst = new ServerWidget(this);
    sevr_inst->show();
    QObject::connect(chat_inst, SIGNAL(sendMsgSignal(QString)), sevr_inst, SLOT(receiveMsg(QString)));
    QObject::connect(sevr_inst, SIGNAL(sendMsgSignal(QString)), chat_inst, SLOT(receiveMsg(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

