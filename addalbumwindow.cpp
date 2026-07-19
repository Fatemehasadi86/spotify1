#include "addalbumwindow.h"
#include "ui_addalbumwindow.h"
#include <QMessageBox>
#include "Album.h"
#include "AlbumRepository.h"

AddAlbumWindow::AddAlbumWindow(int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddAlbumWindow)
{
    ui->setupUi(this);
    this->artistId=artistId;
}

AddAlbumWindow::~AddAlbumWindow()
{
    delete ui;
}

void AddAlbumWindow::on_pushButton_3_clicked()
{
    this->close();
}


void AddAlbumWindow::on_pushButton_2_clicked()
{

    QString title = ui->lineEdit->text();
    QString year = ui->lineEdit_2->text();

    if(title.isEmpty() || year.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please fill all fields.");
        return;
    }

    Album album;

    album.setName(title.toStdString());
    album.setYear(year.toInt());

    AlbumRepository repository;

    repository.loadFromFile();

    int newId = repository.getAllAlbum().size() + 1;

    album.setID(newId);
    album.setArtistId(artistId);

    repository.save(album);

    QMessageBox::information(this,
                             "Success",
                             "Album added successfully.");
    emit albumAdded();

    close();
}


