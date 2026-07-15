#include "editplaylistwindow.h"
#include "ui_editplaylistwindow.h"
#include "PlaylistRepository.h"
#include <QMessageBox>

editPlaylistWindow::editPlaylistWindow(int playlistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editPlaylistWindow)
{
    ui->setupUi(this);
    this->playlistId=playlistId;

    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    ui->lineEdit->setText(
        QString::fromStdString(playlist->getName()));
}

editPlaylistWindow::~editPlaylistWindow()
{
    delete ui;
}

void editPlaylistWindow::on_pushButton_clicked()
{
    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    Playlist editedPlaylist = playlist.value();

    editedPlaylist.setName(ui->lineEdit->text().toStdString());

    repository.save(editedPlaylist);

    QMessageBox::information(this,
                             "Success",
                             "Playlist updated successfully.");

    emit playlistEdited();

    close();
}

