#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>

namespace Ui {
class registerWindow;
}

class registerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit registerWindow(QWidget *parent = nullptr);
    ~registerWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::registerWindow *ui;
};

#endif // REGISTERWINDOW_H