#include "selectalbum2window.h"
#include "ui_selectalbum2window.h"
#include "AlbumRepository.h"
#include <QListWidgetItem>
#include <QMessageBox>


selectAlbum2Window::selectAlbum2Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selectAlbum2Window)
{
    ui->setupUi(this);
    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        item->setData(Qt::UserRole, albums[i].getAlbumId());

        ui->listWidget->addItem(item);
    }
}

selectAlbum2Window::~selectAlbum2Window()
{
    delete ui;
}

void selectAlbum2Window::on_pushButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if (item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select an album.");
        return;
    }

    int albumId = item->data(Qt::UserRole).toInt();

    int reply = QMessageBox::question(
        this,
        "Delete Album",
        "Are you sure you want to delete this album?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No)
        return;

    AlbumRepository repository;
    repository.loadFromFile();

    repository.remove(albumId);

    QMessageBox::information(this,
                             "Success",
                             "Album deleted successfully.");

    close();
}

