#ifndef EDITSONGWINDOW_H
#define EDITSONGWINDOW_H

#include <QWidget>

namespace Ui {
class editsongWindow;
}

class editsongWindow : public QWidget
{
    Q_OBJECT

public:
    explicit editsongWindow(int songId,QWidget *parent = nullptr);
    ~editsongWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editsongWindow *ui;
    int songId;
    int artistId;
};

#endif // EDITSONGWINDOW_H
