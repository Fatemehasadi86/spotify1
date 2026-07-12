#include "artistwindow.h"
#include "ui_artistwindow.h"
#include "addalbumwindow.h"
#include "AlbumRepository.h"
#include <vector>
#include "addsongwindow.h"

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

    std::vector<Album> albums = repository.getAllAlbum();

    for(int i = 0; i < albums.size(); i++)
    {
        ui->listWidgetAlbums->addItem(
            QString::fromStdString(albums[i].getName()));
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

