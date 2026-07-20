#ifndef ALBUM_ARTIST_WINDOW_H
#define ALBUM_ARTIST_WINDOW_H
#include <QListWidgetItem>

#include <QWidget>

namespace Ui {
class album_artist_window;
}

class album_artist_window : public QWidget
{
    Q_OBJECT

public:
    explicit album_artist_window(int artistId,int listenerId,QWidget *parent = nullptr);
    ~album_artist_window();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::album_artist_window *ui;
    int artistId;
    void loadAlbums();
    int listenerId;
};

#endif // ALBUM_ARTIST_WINDOW_H
