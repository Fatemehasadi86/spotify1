#include "createplaylistwindow.h"
#include "ui_createplaylistwindow.h"
#include "PlayList.h"
#include <QMessageBox>
#include "PlaylistRepository.h"

createPlaylistWindow::createPlaylistWindow(int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::createPlaylistWindow)
{
    ui->setupUi(this);
    this->listenerId=listenerId;
}

createPlaylistWindow::~createPlaylistWindow()
{
    delete ui;
}

void createPlaylistWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();

    if (name.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please enter playlist name.");
        return;
    }

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.getAllPlaylist();

    int newId = 1;

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() >= newId)
            newId = playlists[i].getPlaylistId() + 1;
    }

    Playlist playlist(newId,
                      listenerId,
                      name.toStdString());

    repository.save(playlist);

    emit playlistcreated();

    QMessageBox::information(this,
                             "Success",
                             "Playlist created successfully.");

    close();
}


void createPlaylistWindow::on_pushButton_2_clicked()
{
    close();
}

