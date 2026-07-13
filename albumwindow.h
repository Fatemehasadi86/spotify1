#ifndef ALBUMWINDOW_H
#define ALBUMWINDOW_H

#include <QWidget>

namespace Ui {
class albumWindow;
}

class albumWindow : public QWidget
{
    Q_OBJECT

public:
    explicit albumWindow(int albumId, QWidget *parent = nullptr);
    ~albumWindow();
    void loadSong();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::albumWindow *ui;
    int albumId;
};

#endif // ALBUMWINDOW_H
