#include "selectalbumwindow.h"
#include "ui_selectalbumwindow.h"
#include "AlbumRepository.h"
#include <QListWidgetItem>
#include "editalbumwindow.h"
#include <QMessageBox>

selectAlbumWindow::selectAlbumWindow(int artistId,QWidget *parent)
    : QDialog(parent),
    ui(new Ui::selectAlbumWindow)
{
    ui->setupUi(this);
    this->artistId=artistId;
    AlbumRepository repository;
    repository.loadFromFile();

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(albums[i].getName()));

        item->setData(Qt::UserRole, albums[i].getAlbumId());

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

    int albumId = item->data(Qt::UserRole).toInt();

    editAlbumWindow *w = new editAlbumWindow(albumId);

    connect(w, &editAlbumWindow::albumEdited, this, [=](){this->close();emit albumsChanged();});

    w->show();
}


