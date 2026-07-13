#include "selectalbumwindow.h"
#include "ui_selectalbumwindow.h"
#include "AlbumRepository.h"
#include <QListWidgetItem>
#include "editalbumwindow.h"
#include <QMessageBox>

selectAlbumWindow::selectAlbumWindow(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::selectAlbumWindow)
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

selectAlbumWindow::~selectAlbumWindow()
{
    delete ui;
}

void selectAlbumWindow::on_pushButton_clicked()
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

    editAlbumWindow *w = new editAlbumWindow(albumId);

    connect(w, &editAlbumWindow::albumEdited, this, [=](){this->close();emit albumsChanged();});

    w->show();
}


