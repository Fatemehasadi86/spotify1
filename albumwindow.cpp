#include "albumwindow.h"
#include "ui_albumwindow.h"
#include "SongRepository.h"
#include <QMessageBox>
#include "editsongwindow.h"

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
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(songs[i].getName()));

        item->setData(Qt::UserRole, songs[i].getId());

        ui->listWidget->addItem(item);
    }
}
void albumWindow::on_pushButton_3_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if (item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    int songId = item->data(Qt::UserRole).toInt();

    QMessageBox::information(this,
                             "Song ID",
                             QString::number(songId));

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
    QListWidgetItem *item = ui->listWidget->currentItem();

    if (item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    int songId = item->data(Qt::UserRole).toInt();

    editsongWindow *w = new editsongWindow(songId);

    w->setAttribute(Qt::WA_DeleteOnClose);

    connect(w, &QObject::destroyed, this, [=]()
            {
                loadSong();
            });

    w->show();
}

