#include "selectplaylist2window.h"
#include "ui_selectplaylist2window.h"
#include "PlaylistRepository.h"
#include <QMessageBox>

selectplaylist2window::selectplaylist2window(int listenerId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectplaylist2window)
{
    ui->setupUi(this);

    this->listenerId = listenerId;

    loadPlaylists();

    ui->listWidget->clearSelection();
    ui->listWidget->setCurrentRow(-1);
}

selectplaylist2window::~selectplaylist2window()
{
    delete ui;
}

void selectplaylist2window::loadPlaylists()
{
    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.playlists(listenerId);

    for (int i = 0; i < playlists.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(playlists[i].getName()));

        ui->listWidget->addItem(item);
    }
}

void selectplaylist2window::on_pushButton_clicked()
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

    std::vector<Playlist> playlists =repository.playlists(listenerId);

    int playlistId = 0;

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getName() == playlistName.toStdString())
        {
            playlistId = playlists[i].getPlaylistId();
            break;
        }
    }

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this,"Delete Playlist","Are you sure you want to delete this playlist?",
        QMessageBox::Yes | QMessageBox::No);


    if (reply == QMessageBox::Yes)
    {
        repository.remove(playlistId);

        QMessageBox::information(this, "Success","Playlist deleted successfully.");

        emit playlistDelete();

        close();
    }
}