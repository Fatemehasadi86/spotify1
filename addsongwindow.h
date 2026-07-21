#ifndef ADDSONGWINDOW_H
#define ADDSONGWINDOW_H

#include <QWidget>

namespace Ui {
class addSongWindow;
}

class addSongWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addSongWindow(int artistId,QWidget *parent = nullptr);
    ~addSongWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addSongWindow *ui;
    int artistId;

    QString songPath;
    QString imagePath;
};

#endif // ADDSONGWINDOW_H
