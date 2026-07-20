#include "likedsongwindow.h"
#include "ui_likedsongwindow.h"
#include <QListWidgetItem>
#include "likedSongsRepository.h"
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

    LikedSongsRepository likedRepository;
    SongRepository songRepository;

    songRepository.loadFromFile();

    std::vector<int> likedSongs =
        likedRepository.getLikedSongs(listenerId);

    for (int i = 0; i < likedSongs.size(); i++)
    {
        std::optional<Song> song =
            songRepository.search(likedSongs[i]);

        if (!song.has_value())
            continue;

        QString name = QString::fromStdString(song->getName());

        if (!name.contains(searchText))
            continue;

        QListWidgetItem *item =new QListWidgetItem(name);

        ui->listWidget->addItem(item);
    }
}

void LikedSongWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString songName = item->text();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            selectedSongId = songs[i].getId();
            break;
        }
    }
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

