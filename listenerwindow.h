#ifndef LISTENERWINDOW_H
#define LISTENERWINDOW_H

#include <QWidget>

namespace Ui {
class listenerWindow;
}

class listenerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit listenerWindow(int listenerId,QWidget *parent = nullptr);
    ~listenerWindow();
    void loadplaylist();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::listenerWindow *ui;
    int listenerId;
};

#endif // LISTENERWINDOW_H
