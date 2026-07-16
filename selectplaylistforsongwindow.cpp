#include "selectplaylistforsongwindow.h"
#include "ui_selectplaylistforsongwindow.h"
#include "PlayList.h"
#include "PlaylistRepository.h"
#include <QMessageBox>

selectPlaylistforsongwindow::selectPlaylistforsongwindow(int listenerId,int songId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectPlaylistforsongwindow)
{
    ui->setupUi(this);
    this->listenerId=listenerId;
    this->songId=songId;
    loadPlaylist();

}

selectPlaylistforsongwindow::~selectPlaylistforsongwindow()
{
    delete ui;
}

void selectPlaylistforsongwindow::loadPlaylist()
{
    qDebug()<<"listener id :"<<listenerId;

    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.playlistsByListener(listenerId);

    qDebug()<<"playlists count "<<playlists.size();

    for (int i = 0; i < playlists.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(playlists[i].getName()));

        item->setData(Qt::UserRole,
                      playlists[i].getPlaylistId());

        ui->listWidget->addItem(item);
    }
}
void selectPlaylistforsongwindow::on_pushButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a playlist.");
        return;
    }

    int playlistId = item->data(Qt::UserRole).toInt();

    PlaylistRepository repository;
    repository.insertSong(playlistId, songId);

    QMessageBox::information(this,
                             "Success",
                             "Song added successfully.");


    close();
}

