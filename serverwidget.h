#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QDialog>

namespace Ui {
class ServerWidget;
}

class ServerWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ServerWidget(QWidget *parent = nullptr);
    ~ServerWidget();
    void sendMsg(const QString &str);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ServerWidget *ui;

signals:
    void sendMsgSignal(QString);
public slots:
    void receiveMsg(const QString &str);
};

#endif // SERVERWIDGET_H
