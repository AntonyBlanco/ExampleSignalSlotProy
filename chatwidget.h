#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QDialog>

namespace Ui {
class ChatWidget;
}

class ChatWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ChatWidget(QWidget *parent = nullptr);
    ~ChatWidget();
    void sendMsg(const QString &str);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChatWidget *ui;

signals:
    void sendMsgSignal(QString);
public slots:
    void receiveMsg(const QString &str);
};

#endif // CHATWIDGET_H
