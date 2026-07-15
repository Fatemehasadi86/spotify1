#include "album_song_window.h"
#include "ui_album_song_window.h"
#include "SongRepository.h"
#include <QListWidgetItem>

album_song_window::album_song_window(int albumId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::album_song_window)
{
    ui->setupUi(this);

    this->albumId = albumId;

    loadSongs();
}

album_song_window::~album_song_window()
{
    delete ui;
}

void album_song_window::loadSongs()
{
    ui->listWidget->clear();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getAlbumId() != albumId)
            continue;

        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(songs[i].getName()));

        item->setData(Qt::UserRole, songs[i].getId());

        ui->listWidget->addItem(item);
    }
}