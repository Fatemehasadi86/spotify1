#include "artistwindow.h"
#include "ui_artistwindow.h"
#include "addalbumwindow.h"
#include "AlbumRepository.h"
#include <vector>
#include "addsongwindow.h"
#include "albumwindow.h"
#include "selectalbumwindow.h"
#include "selectalbum2window.h"



artistWindow::artistWindow(int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::artistWindow)
{
    this->artistId=artistId;
    ui->setupUi(this);
    loadAlbums();
}

artistWindow::~artistWindow()
{
    delete ui;
}

void artistWindow::on_pushButton_clicked()
{

    AddAlbumWindow *window = new AddAlbumWindow();

    connect(window,&AddAlbumWindow::albumAdded,this, &artistWindow::loadAlbums);

    window->show();
}

void artistWindow::loadAlbums()
{
    ui->listWidgetAlbums->clear();

    AlbumRepository repository;
    repository.loadFromFile();

    QListWidgetItem *singles = new QListWidgetItem("Singles");
    singles->setData(Qt::UserRole, 0);
    ui->listWidgetAlbums->addItem(singles);

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        item->setData(Qt::UserRole, albums[i].getAlbumId());

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

    int albumId = item->data(Qt::UserRole).toInt();
    albumWindow *window2 = new albumWindow(albumId);
    window2->show();
}


void artistWindow::on_pushButton_3_clicked()
{
    selectAlbumWindow *s=new selectAlbumWindow();

    connect(s, &selectAlbumWindow::albumsChanged,this, &artistWindow::loadAlbums);

    s->show();

}


void artistWindow::on_pushButton_4_clicked()
{
    selectAlbum2Window *w = new selectAlbum2Window();

    w->setAttribute(Qt::WA_DeleteOnClose);

    connect(w, &QObject::destroyed, this, [=]()
            {
                loadAlbums();
            });

    w->show();

}

