#include "selectplaylistwindow.h"
#include "PlaylistRepository.h"
#include "ui_selectplaylistwindow.h"
#include "editplaylistwindow.h"
#include <QMessageBox>

selectPlaylistWindow::selectPlaylistWindow(int listenerId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectPlaylistWindow)
{
    ui->setupUi(this);
    this->listenerId = listenerId;
    loadPlaylists();

    ui->listWidget->clearSelection();
    ui->listWidget->setCurrentRow(-1);
}

selectPlaylistWindow::~selectPlaylistWindow()
{
    delete ui;
}

void selectPlaylistWindow::on_pushButton_clicked() {

    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a playlist.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    int playlistId = item->data(Qt::UserRole).toInt();

    editPlaylistWindow *w = new editPlaylistWindow(playlistId);

    connect(w, &editPlaylistWindow::playlistEdited,
            this, [=]()
            {
                emit playlistEdited();
                close();
            });

    w->show();
}

void selectPlaylistWindow::loadPlaylists()
{
    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists = repository.playlistsByListener(listenerId);

    for (int i = 0; i < playlists.size(); i++) {
        QListWidgetItem *item = new QListWidgetItem(QString::fromStdString(playlists[i].getName()));

        item->setData(Qt::UserRole, playlists[i].getPlaylistId());

        ui->listWidget->addItem(item);
    }
}
