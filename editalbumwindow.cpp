#include "editalbumwindow.h"
#include "ui_editalbumwindow.h"
#include "AlbumRepository.h"
#include <QMessageBox>

editAlbumWindow::editAlbumWindow(int albumId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editAlbumWindow)
{
    ui->setupUi(this);
    this->albumId=albumId;
    AlbumRepository repository;
    repository.loadFromFile();

    std::optional<Album> album = repository.search(albumId);

    if (album.has_value())
    {
        ui->lineEdit->setText(QString::fromStdString(album->getName()));
        ui->lineEdit_2->setText(QString::number(album->getYear()));
    }

}

editAlbumWindow::~editAlbumWindow()
{
    delete ui;
}

void editAlbumWindow::on_pushButton_clicked()
{
    AlbumRepository repository;
    repository.loadFromFile();

    std::optional<Album> album = repository.search(albumId);

    if (!album.has_value())
        return;

    Album editedAlbum = album.value();

    editedAlbum.setName(ui->lineEdit->text().toStdString());
    editedAlbum.setYear(ui->lineEdit_2->text().toInt());

    repository.save(editedAlbum);

    QMessageBox::information(this,
                             "Success",
                             "Album updated successfully.");


    emit albumEdited();

    close();
}

