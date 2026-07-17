#include "listenerwindow.h"
#include "ui_listenerwindow.h"
#include <QListWidgetItem>
#include "PlaylistRepository.h"
#include "createplaylistwindow.h"
#include "selectplaylistwindow.h"
#include "selectplaylist2window.h"
#include "exploremusicwindow.h"
#include "playlistsongswindow.h"
#include "likedsongwindow.h"
#include "ListenerRepository.h"


listenerWindow::listenerWindow(int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::listenerWindow)
{
    ui->setupUi(this);
    this->listenerId=listenerId;

    ListenerRepository repository;
    repository.loadFromFile();

    std::optional<Account> listener = repository.search(listenerId);

    if (listener.has_value())
    {
        ui->label_3->setText(
            QString::fromStdString(listener->getFullName()));
    }

    loadplaylist();
}

listenerWindow::~listenerWindow()
{
    delete ui;
}

void listenerWindow::loadplaylist()
{
    ui->listWidget->clear();

    QListWidgetItem *favorite = new QListWidgetItem("Favorite Songs");

    favorite->setData(Qt::UserRole, -1);

    ui->listWidget->addItem(favorite);

    PlaylistRepository repository;
    repository.loadFromFile();

    std::vector<Playlist> playlists =
        repository.playlistsByListener(listenerId);

    for (int i = 0; i < playlists.size(); i++)
    {
        QListWidgetItem *item =
            new QListWidgetItem(
                QString::fromStdString(playlists[i].getName()));

        item->setData(Qt::UserRole,
                      playlists[i].getPlaylistId());

        ui->listWidget->addItem(item);
    }
}

void listenerWindow::on_pushButton_clicked()
{
    createPlaylistWindow *w = new createPlaylistWindow(listenerId);

    connect(w, &createPlaylistWindow::playlistcreated,
            this, &listenerWindow::loadplaylist);

    w->show();

}


void listenerWindow::on_pushButton_5_clicked()
{
    close();
}


void listenerWindow::on_pushButton_2_clicked()
{
    selectPlaylistWindow *w =
        new selectPlaylistWindow(listenerId);

    connect(w, &selectPlaylistWindow::playlistEdited,
            this, &listenerWindow::loadplaylist);

    w->show();
}


void listenerWindow::on_pushButton_3_clicked()
{
    selectplaylist2window *w = new selectplaylist2window(listenerId);

    connect(w, &selectplaylist2window::playlistDelete,
            this, &listenerWindow::loadplaylist);

    w->show();
}


void listenerWindow::on_pushButton_4_clicked()
{
    exploreMusicwindow *e= new exploreMusicwindow (listenerId);

    e->show();
}



void listenerWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    int playlistId = item->data(Qt::UserRole).toInt();

    if (playlistId == -1)
    {
        LikedSongWindow *w = new LikedSongWindow(listenerId);
        w->show();
        return;
    }

    PlaylistSongsWindow *window =
        new PlaylistSongsWindow(playlistId);

    window->show();
}

