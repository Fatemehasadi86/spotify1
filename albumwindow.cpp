#include "albumwindow.h"
#include "ui_albumwindow.h"
#include "SongRepository.h"
#include <QMessageBox>
#include "editsongwindow.h"
#include "AlbumRepository.h"

albumWindow::albumWindow(int albumId,int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::albumWindow)
{
    ui->setupUi(this);
    this->albumId=albumId;
    this->artistId=artistId;
    if (albumId == 0)
    {
        ui->label_2->setText("Singles");
    }
    else
    {
        AlbumRepository repository;
        repository.loadFromFile();

        std::optional<Album> album = repository.search(albumId);

        if (album.has_value())
        {
            ui->label_2->setText(QString::fromStdString(album->getName()));
        }
    }

    loadSong();
    ui->listWidget->clearSelection();
    ui->listWidget->setCurrentRow(-1);
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
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(songs[i].getName()));

        item->setData(Qt::UserRole, songs[i].getId());

        ui->listWidget->addItem(item);
    }
}
void albumWindow::on_pushButton_3_clicked()
{
    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    int songId = item->data(Qt::UserRole).toInt();

    int reply = QMessageBox::question(
        this,
        "Delete Song",
        "Are you sure you want to delete this song?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No)
        return;

    SongRepository repository;
    repository.loadFromFile();

    if (repository.remove(songId))
    {
        loadSong();

        QMessageBox::information(this,
                                 "Success",
                                 "Song deleted successfully.");
    }

}


void albumWindow::on_pushButton_2_clicked()
{
    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    int songId = item->data(Qt::UserRole).toInt();

    editsongWindow *w = new editsongWindow(songId,artistId);

    w->setAttribute(Qt::WA_DeleteOnClose);

    connect(w, &QObject::destroyed, this, [=]()
            {
                loadSong();
            });

    w->show();
}

