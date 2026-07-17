#include "album_song_window.h"
#include "ui_album_song_window.h"
#include "SongRepository.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include "selectplaylistforsongwindow.h"
#include "likedSongsRepository.h"

album_song_window::album_song_window(int albumId,int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::album_song_window)
{
    ui->setupUi(this);

    this->albumId = albumId;
    this->listenerId = listenerId;

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
void album_song_window::on_listWidget_itemClicked(QListWidgetItem *item)
{

    selectedId = item->data(Qt::UserRole).toInt();
}


void album_song_window::on_pushButton_clicked()
{
    if(selectedId == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    selectPlaylistforsongwindow *w =
        new selectPlaylistforsongwindow(listenerId,
                                        selectedId);

    w->show();
}


void album_song_window::on_pushButton_2_clicked()
{
    if (selectedId == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    LikedSongsRepository repository;

    if (repository.isLiked(listenerId, selectedId))
    {
        repository.removeSong(listenerId, selectedId);

        QMessageBox::information(this,
                                 "Success",
                                 "Song removed from liked songs.");
    }
    else
    {
        repository.addSong(listenerId, selectedId);

        QMessageBox::information(this,
                                 "Success",
                                 "Song added to liked songs.");
    }
}

