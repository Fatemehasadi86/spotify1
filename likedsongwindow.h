#ifndef LIKEDSONGWINDOW_H
#define LIKEDSONGWINDOW_H

#include <QWidget>

namespace Ui {
class LikedSongWindow;
}

class LikedSongWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LikedSongWindow(int listenerId,QWidget *parent = nullptr);
    ~LikedSongWindow();
    void loadSongs();

private:
    Ui::LikedSongWindow *ui;
    int listenerId;
};

#endif // LIKEDSONGWINDOW_H
