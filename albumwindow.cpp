#include "albumwindow.h"
#include "ui_albumwindow.h"
#include "SongRepository.h"

albumWindow::albumWindow(int albumId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::albumWindow)
{
    ui->setupUi(this);
    this->albumId=albumId;
    loadSong();
}

albumWindow::~albumWindow()
{
    delete ui;
}

void albumWindow::on_pushButton_4_clicked()
{
    close();
}

void albumWindow::loadSong()
{
    ui->listWidget->clear();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getByAlbum(albumId);

    for (int i = 0; i < songs.size(); i++)
    {
        ui->listWidget->addItem(QString::fromStdString(songs[i].getName()));
    }
}