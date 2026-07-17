#include "likedsongwindow.h"
#include "ui_likedsongwindow.h"
#include<QListWidgetItem>
#include "likedSongsRepository.h"
#include "SongRepository.h"

LikedSongWindow::LikedSongWindow(int listenerId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LikedSongWindow)
{
    ui->setupUi(this);
    this->listenerId=listenerId;
    loadSongs();
}

LikedSongWindow::~LikedSongWindow()
{
    delete ui;
}

void LikedSongWindow::loadSongs()
{
    ui->listWidget->clear();

    LikedSongsRepository likedRepository;
    SongRepository songRepository;

    songRepository.loadFromFile();

    std::vector<int> likedSongs =
        likedRepository.getLikedSongs(listenerId);

    for (int i = 0; i < likedSongs.size(); i++)
    {
        auto song = songRepository.search(likedSongs[i]);

        if (!song.has_value())
            continue;

        QListWidgetItem *item =
            new QListWidgetItem(
                QString::fromStdString(song->getName()));

        item->setData(Qt::UserRole,
                      song->getId());

        ui->listWidget->addItem(item);
    }
}