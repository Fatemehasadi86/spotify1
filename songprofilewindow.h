#ifndef SONGPROFILEWINDOW_H
#define SONGPROFILEWINDOW_H

#include <QWidget>
#include "Song.h"
#include <QPixmap>

namespace Ui {
class SongProfileWindow;
}

class SongProfileWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SongProfileWindow(Song &song,QWidget *parent = nullptr);
    ~SongProfileWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SongProfileWindow *ui;
    Song song;
};

#endif // SONGPROFILEWINDOW_H
