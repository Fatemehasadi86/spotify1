#include "exploremusicwindow.h"
#include "ui_exploremusicwindow.h"
#include <QListWidgetItem>
#include "ArtistRepository.h"
#include "AlbumRepository.h"
#include "album_artist_window.h"


exploreMusicwindow::exploreMusicwindow(int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::exploreMusicwindow)
{
    ui->setupUi(this);

    this->listenerId = listenerId;

    loadArtists();

}

exploreMusicwindow::~exploreMusicwindow()
{
    delete ui;
}

void exploreMusicwindow::loadArtists()
{
    ui->listWidget->clear();

    ArtistRepository repository;

    std::vector<Account> artists = repository.getAll();

    for (int i = 0; i < artists.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(artists[i].getUsername()));

        ui->listWidget->addItem(item);
    }
}



void exploreMusicwindow::on_listWidget_itemClicked(QListWidgetItem *item)
{

}

void exploreMusicwindow::loadAlbums()
{
    ui->listWidget->clear();

    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != selectedArtistId)
            continue;

        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        ui->listWidget->addItem(item);
    }
}

void exploreMusicwindow::on_pushButton_2_clicked()
{
    close();
}


void exploreMusicwindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString username = item->text();

    ArtistRepository repository;
    repository.loadFromFile();

    std::vector<Account> artists = repository.getAll();

    int artistId = 0;

    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getUsername() == username.toStdString())
        {
            artistId = artists[i].getId();
            break;
        }
    }

    album_artist_window *w =
        new album_artist_window(artistId, listenerId);

    w->show();
}

