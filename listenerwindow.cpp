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
#include <QFileDialog>
#include <QFileInfo>
#include "ListenerRepository.h"
#include "SongRepository.h"


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

        QString path;

        if (listener->getProfileImage().empty())
        {
            path = ":/images/cover1.jpg";
        }
        else
        {
            path = QDir::cleanPath(
                QCoreApplication::applicationDirPath()
                + "/../../../spotify/"
                + QString::fromStdString(listener->getProfileImage())
                );
        }

        QPixmap pixmap(path);

        if (pixmap.isNull())
        {
            pixmap.load(":/images/cover1.jpg");
        }

        ui->label_4->setPixmap(
            pixmap.scaled(
                150,
                150,
                Qt::KeepAspectRatio,
                Qt::SmoothTransformation));
    }
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
        repository.playlists(listenerId);

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
        repository.playlists(listenerId);

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



void listenerWindow::on_pushButton_8_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        "Select Profile Image",
        "",
        "Images (*.png *.jpg *.jpeg)"
        );

    if (fileName.isEmpty())
        return;

    QString projectImages =
        QDir::cleanPath(QDir::currentPath() + "/../../../spotify/images");

    QDir dir(projectImages);

    if (!dir.exists())
        dir.mkpath(".");

    QString imageName = QFileInfo(fileName).fileName();

    QString newPath = dir.filePath(imageName);

    QFile::remove(newPath);

    bool ok = QFile::copy(fileName, newPath);

    if (!ok)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Image was not copied.");
        return;
    }

    QString relativePath = "images/" + imageName;

    ListenerRepository repository;
    repository.loadFromFile();

    std::optional<Account> account = repository.search(listenerId);

    if (!account.has_value())
        return;

    Account listener = account.value();

    listener.setProfileImage(relativePath.toStdString());

    repository.save(listener);

    QMessageBox::information(
        this,
        "Success",
        "Profile image updated successfully."
        );
}





void listenerWindow::on_pushButton_9_clicked()
{
    SongRepository repository;
    repository.loadFromFile();

    ListenerRepository listenerRepository;

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (!listenerRepository.isLiked(listenerId, songs[i].getId()))
        {
            QMessageBox::information(
                this,
                "Recommended Song",
                QString::fromStdString(songs[i].getName()));

            return;
        }
    }

    QMessageBox::information(
        this,
        "Recommend",
        "No song to recommend.");

}

