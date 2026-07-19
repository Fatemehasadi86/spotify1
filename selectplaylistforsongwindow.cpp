#include "selectplaylistforsongwindow.h"
#include "ui_selectplaylistforsongwindow.h"
#include "PlayList.h"
#include "PlaylistRepository.h"
#include <QMessageBox>

selectPlaylistforsongwindow::selectPlaylistforsongwindow(int listenerId,
                                                         int songId,
                                                         QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectPlaylistforsongwindow)
{
    ui->setupUi(this);

    this->listenerId = listenerId;
    this->songId = songId;

    loadPlaylist();

    ui->listWidget->clearSelection();
    ui->listWidget->setCurrentRow(-1);
}

selectPlaylistforsongwindow::~selectPlaylistforsongwindow()
{
    delete ui;
}

void selectPlaylistforsongwindow::loadPlaylist()
{
    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.playlistsByListener(listenerId);

    for (int i = 0; i < playlists.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(playlists[i].getName()));

        ui->listWidget->addItem(item);
    }
}

void selectPlaylistforsongwindow::on_pushButton_clicked()
{
    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a playlist.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    QString playlistName = item->text();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.playlistsByListener(listenerId);

    int playlistId = 0;

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getName() == playlistName.toStdString())
        {
            playlistId = playlists[i].getPlaylistId();
            break;
        }
    }

    repository.insertSong(playlistId, songId);

    QMessageBox::information(this,
                             "Success",
                             "Song added successfully.");

    close();
}