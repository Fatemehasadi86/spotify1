#include "album_artist_window.h"
#include "ui_album_artist_window.h"
#include "AlbumRepository.h"
#include "album_song_window.h"

album_artist_window::album_artist_window(int artistId,int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::album_artist_window)
{
    ui->setupUi(this);

    this->artistId = artistId;
    this->listenerId = listenerId;

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

        ui->listWidget->addItem(item);
    }
}

void album_artist_window::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString albumName = item->text();

    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    int albumId = 0;

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getName() == albumName.toStdString())
        {
            albumId = albums[i].getAlbumId();
            break;
        }
    }

    album_song_window *w = new album_song_window(albumId, listenerId);

    w->show();

}

