#include "album_artist_window.h"
#include "ui_album_artist_window.h"
#include "AlbumRepository.h"
#include "album_song_window.h"

album_artist_window::album_artist_window(int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::album_artist_window)
{
    ui->setupUi(this);
    this->artistId=artistId;
    loadAlbums();
}

album_artist_window::~album_artist_window()
{
    delete ui;
}

void album_artist_window::loadAlbums()
{
    ui->listWidget->clear();

    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        item->setData(Qt::UserRole, albums[i].getAlbumId());

        ui->listWidget->addItem(item);
    }
}
void album_artist_window::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int albumId = item->data(Qt::UserRole).toInt();

    album_song_window *w = new album_song_window(albumId);

    w->show();

}

