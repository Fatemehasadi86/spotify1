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
    explicit albumWindow(int albumId,int artistId, QWidget *parent = nullptr);
    ~albumWindow();
    void loadSong();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::albumWindow *ui;
    int albumId;
    int artistId;
};

#endif // ALBUMWINDOW_H
