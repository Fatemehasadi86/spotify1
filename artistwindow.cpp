#include "artistwindow.h"
#include "ui_artistwindow.h"
#include "addalbumwindow.h"
#include "AlbumRepository.h"
#include <vector>
#include "addsongwindow.h"
#include "albumwindow.h"
#include "selectalbumwindow.h"
#include "selectalbum2window.h"
#include "ArtistRepository.h"
#include "editaccountwindow.h"
#include <QMessageBox>
#include "loginwindow.h"



artistWindow::artistWindow(int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::artistWindow)
{
    this->artistId=artistId;
    ui->setupUi(this);

    ui->listWidgetAlbums->setIconSize(QSize(120,120));

    ArtistRepository repository;
    repository.loadFromFile();

    std::optional<Account> artist = repository.search(artistId);

    if (artist.has_value())
    {
        ui->label_3->setText(
            QString::fromStdString(artist->getFullName()));
    }

    loadAlbums();
}

artistWindow::~artistWindow()
{
    delete ui;
}

void artistWindow::on_pushButton_clicked()
{

    AddAlbumWindow *window = new AddAlbumWindow(artistId);

    connect(window,&AddAlbumWindow::albumAdded,this, &artistWindow::loadAlbums);

    window->show();
}


void artistWindow::loadAlbums()
{
    ui->listWidgetAlbums->clear();

    AlbumRepository repository;
    repository.loadFromFile();

    QListWidgetItem *singles = new QListWidgetItem("Singles");
    ui->listWidgetAlbums->addItem(singles);

    std::vector<Album> albums = repository.albums(artistId);

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        QPixmap pixmap(QString::fromStdString(albums[i].getCoverImage()));

        QIcon icon(pixmap);

        QListWidgetItem *item =
            new QListWidgetItem(icon,
                                QString::fromStdString(albums[i].getName()));

        ui->listWidgetAlbums->addItem(item);
    }
}


void artistWindow::on_pushButton_5_clicked()
{
    close();
}


void artistWindow::on_pushButton_2_clicked()
{
    addSongWindow *addsong=new addSongWindow(artistId);
    addsong->show();
}


void artistWindow::on_listWidgetAlbums_itemDoubleClicked(QListWidgetItem *item)
{
    if (item == nullptr)
        return;

    QString albumName = item->text();

    int albumId = 0;

    if (albumName != "Singles")
    {
        AlbumRepository repository;
        repository.loadFromFile();

        std::vector<Album> albums = repository.albums(artistId);

        for (int i = 0; i < albums.size(); i++)
        {
            if (albums[i].getName() == albumName.toStdString())
            {
                albumId = albums[i].getAlbumId();
                break;
            }
        }
    }

    albumWindow *window2 = new albumWindow(albumId, artistId);
    window2->show();
}


void artistWindow::on_pushButton_3_clicked()
{
    selectAlbumWindow *s=new selectAlbumWindow(artistId);

    connect(s, &selectAlbumWindow::albumsChanged,this, &artistWindow::loadAlbums);

    s->show();

}


void artistWindow::on_pushButton_4_clicked()
{
    selectAlbum2Window *w = new selectAlbum2Window(artistId);

    w->setAttribute(Qt::WA_DeleteOnClose);

    connect(w, &QObject::destroyed, this, [=]()
            {
                loadAlbums();
            });

    w->show();

}


void artistWindow::on_pushButton_6_clicked()
{
    EditAccountwindow *w=new EditAccountwindow(artistId,true);
    w->show();
}


void artistWindow::on_pushButton_7_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(
        this,
        "Delete Account",
        "Are you sure you want to delete your account?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No)
        return;

    ArtistRepository repository;
    repository.loadFromFile();

    repository.remove(artistId);

    loginwindow *login = new loginwindow();
    login->show();

    close();
}

