#include "selectalbumwindow.h"
#include "ui_selectalbumwindow.h"
#include "AlbumRepository.h"
#include <QListWidgetItem>
#include "editalbumwindow.h"
#include <QMessageBox>

selectAlbumWindow::selectAlbumWindow(int artistId, QWidget *parent)
    : QDialog(parent),
    ui(new Ui::selectAlbumWindow)
{
    ui->setupUi(this);

    this->artistId = artistId;

    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        ui->listWidget->addItem(item);
    }

    ui->listWidget->clearSelection();
    ui->listWidget->setCurrentRow(-1);
}

selectAlbumWindow::~selectAlbumWindow()
{
    delete ui;
}

void selectAlbumWindow::on_pushButton_clicked()
{
    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select an album.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    QString albumName = item->text();

    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    int albumId = 0;

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        if (albums[i].getName() == albumName.toStdString())
        {
            albumId = albums[i].getAlbumId();
            break;
        }
    }

    editAlbumWindow *w = new editAlbumWindow(albumId);

    connect(w, &editAlbumWindow::albumEdited,
            this,
            [=]()
            {
                this->close();
                emit albumsChanged();
            });

    w->show();
}