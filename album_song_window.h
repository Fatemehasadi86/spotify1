#ifndef ALBUM_SONG_WINDOW_H
#define ALBUM_SONG_WINDOW_H

#include <QWidget>

namespace Ui {
class album_song_window;
}

class album_song_window : public QWidget
{
    Q_OBJECT

public:
    explicit album_song_window(int albumId,QWidget *parent = nullptr);
    ~album_song_window();

private:
    Ui::album_song_window *ui;
    int albumId;
    void loadSongs();
};

#endif // ALBUM_SONG_WINDOW_H
