#include "playlistsongswindow.h"
#include "ui_playlistsongswindow.h"
#include "PlaylistRepository.h"
#include <QMessageBox>
#include <QListWidgetItem>

PlaylistSongsWindow::PlaylistSongsWindow(int playlistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlaylistSongsWindow)
{
    ui->setupUi(this);

    this->playlistId = playlistId;

    loadSongs();
}

PlaylistSongsWindow::~PlaylistSongsWindow()
{
    delete ui;
}


void PlaylistSongsWindow::loadSongs()
{
    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    std::vector<Song> songs = playlist->getSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        QString name = QString::fromStdString(songs[i].getName());

        if (!name.contains(searchText))
            continue;

        QListWidgetItem *item = new QListWidgetItem(name);

        ui->listWidget->addItem(item);
    }
}

void PlaylistSongsWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString songName = item->text();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    std::vector<Song> songs = playlist->getSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            selectedSongId = songs[i].getId();
            break;
        }
    }
}


void PlaylistSongsWindow::on_pushButton_clicked()
{
    if(selectedSongId == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    PlaylistRepository repository;
    repository.loadFromFile();

    repository.removeSong(playlistId, selectedSongId);

    loadSongs();

    QMessageBox::information(this,
                             "Success",
                             "Song removed successfully.");
}


void PlaylistSongsWindow::on_lineEdit_textChanged(const QString &arg1)
{
    searchText=arg1;
    loadSongs();
}


void PlaylistSongsWindow::on_pushButton_2_clicked()
{
    close();
}

