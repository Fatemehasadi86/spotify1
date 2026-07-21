#include "likedsongwindow.h"
#include "ui_likedsongwindow.h"

#include <QListWidgetItem>
#include<QMessageBox>
#include "SongRepository.h"

LikedSongWindow::LikedSongWindow(int listenerId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LikedSongWindow)
{
    ui->setupUi(this);

    this->listenerId = listenerId;

    loadSongs();
}

LikedSongWindow::~LikedSongWindow()
{
    delete ui;
}

void LikedSongWindow::loadSongs()
{
    ui->listWidget->clear();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> likedSongs =
        repository.getByLikedSongs(listenerId);

    for (int i = 0; i < likedSongs.size(); i++)
    {
        QString name = QString::fromStdString(likedSongs[i].getName());

        if (!searchText.isEmpty() &&
            !name.contains(searchText, Qt::CaseInsensitive))
        {
            continue;
        }

        QListWidgetItem *item = new QListWidgetItem(name);

        item->setData(Qt::UserRole, likedSongs[i].getId());

        ui->listWidget->addItem(item);
    }
}

void LikedSongWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    selectedSongId = item->data(Qt::UserRole).toInt();
}

void LikedSongWindow::on_lineEdit_textChanged(const QString &arg1)
{
    searchText = arg1;
    loadSongs();
}

void LikedSongWindow::on_pushButton_clicked()
{
    close();
}

void LikedSongWindow::on_pushButton_2_clicked()
{
    if (selectedSongId == 0)
    {
        QMessageBox::warning(this,"Error","Please select a song.");
        return;
    }

    SongRepository repository;

    repository.unlikeSong(listenerId, selectedSongId);

    loadSongs();

    selectedSongId = 0;

    QMessageBox::information(this,"Success","Song removed from liked songs.");
}

