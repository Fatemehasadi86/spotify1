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
#include "editaccountwindow.h"
#include "loginwindow.h"
#include <QMessageBox>


listenerWindow::listenerWindow(int listenerId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::listenerWindow)
{
    ui->setupUi(this);
    this->listenerId = listenerId;

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
    selectplaylist2window *w =
        new selectplaylist2window(listenerId);

    connect(w, &selectplaylist2window::playlistDelete,
            this, &listenerWindow::loadplaylist);

    w->show();
}

void listenerWindow::on_pushButton_4_clicked()
{
    exploreMusicwindow *e =
        new exploreMusicwindow(listenerId);

    e->show();
}

void listenerWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString playlistName = item->text();

    if (playlistName == "Favorite Songs")
    {
        LikedSongWindow *w = new LikedSongWindow(listenerId);
        w->show();
        return;
    }

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

    PlaylistSongsWindow *window =
        new PlaylistSongsWindow(playlistId);

    window->show();
}
void listenerWindow::on_pushButton_6_clicked()
{
    EditAccountwindow *ew = new EditAccountwindow(listenerId,false);
    ew->show();
}


void listenerWindow::on_pushButton_7_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(
        this,
        "Delete Account",
        "Are you sure you want to delete your account?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No)
        return;

    ListenerRepository repository;
    repository.loadFromFile();

    repository.remove(listenerId);

    loginwindow *login = new loginwindow();
    login->show();

    close();
}

