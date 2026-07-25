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

    void on_lineEdit_5_textChanged(const QString &arg1);

private:
    Ui::registerWindow *ui;

    QString checkPassword(QString password);
};

#endif // REGISTERWINDOW_H