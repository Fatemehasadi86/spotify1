#ifndef ALBUM_SONG_WINDOW_H
#define ALBUM_SONG_WINDOW_H
#include <QListWidgetItem>

#include <QWidget>

namespace Ui {
class album_song_window;
}

class album_song_window : public QWidget
{
    Q_OBJECT

public:
    explicit album_song_window(int albumId,int listenerId,QWidget *parent = nullptr);
    ~album_song_window();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::album_song_window *ui;
    int albumId;
    void loadSongs();
    int selectedId=-1;
    int listenerId;
};

#endif // ALBUM_SONG_WINDOW_H
