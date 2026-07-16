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

    auto playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    std::vector<Song> songs = playlist->getSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(songs[i].getName()));

        item->setData(Qt::UserRole, songs[i].getId());

        ui->listWidget->addItem(item);
    }
}
void PlaylistSongsWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{

    selectedSongId = item->data(Qt::UserRole).toInt();
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

