#include "playlistsongswindow.h"
#include "ui_playlistsongswindow.h"
#include "PlaylistRepository.h"
#include <QMessageBox>
#include <QListWidgetItem>
#include "SongRepository.h"
#include "songprofilewindow.h"

PlaylistSongsWindow::PlaylistSongsWindow(int playlistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlaylistSongsWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(1.0);

    this->playlistId = playlistId;
    sortText= ui->comboBox->currentText();

    loadSongs();
}

PlaylistSongsWindow::~PlaylistSongsWindow()
{
    delete ui;
}


void PlaylistSongsWindow::loadSongs()
{
    ui->listWidget->clear();

    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    std::vector<Song> songs = playlist->getSongs();

    // ---------- Filter ----------
    if (filtergenre != "All")
    {
        std::vector<Song> filtered;

        for (int i = 0; i < songs.size(); i++)
        {
            if (songs[i].getGenre() == filtergenre.toStdString())
            {
                filtered.push_back(songs[i]);
            }
        }

        songs = filtered;
    }

    // ---------- Filter by Year ----------
    if (yearfilter != "All")
    {
        std::vector<Song> filtered;

        for (int i = 0; i < songs.size(); i++)
        {
            if (songs[i].getReleaseYear() == yearfilter.toInt())
            {
                filtered.push_back(songs[i]);
            }
        }

        songs = filtered;
    }

    // ---------- Sort ----------
    if (sortText == "Name (A-Z)")
    {
        std::sort(songs.begin(), songs.end(),
                  [](const Song &a, const Song &b)
                  {
                      return a.getName() < b.getName();
                  });
    }
    else if (sortText == "Year (New-old)")
    {
        std::sort(songs.begin(), songs.end(),
                  [](const Song &a, const Song &b)
                  {
                      return a.getReleaseYear() > b.getReleaseYear();
                  });
    }

    // ---------- Search ----------
    for (int i = 0; i < songs.size(); i++)
    {
        QString name = QString::fromStdString(songs[i].getName());

        if (!name.contains(searchText, Qt::CaseInsensitive))
            continue;

        QListWidgetItem *item = new QListWidgetItem(name);

        ui->listWidget->addItem(item);
    }
}

void PlaylistSongsWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString songName = item->text();

    currentIndex = ui->listWidget->row(item);

    PlaylistRepository repository;
    repository.loadFromFile();

    std::optional<Playlist> playlist = repository.search(playlistId);

    if (!playlist.has_value())
        return;

    std::vector<Song> songs = playlist->getSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            selectedSongId = songs[i].getId();
            break;
        }
    }
}


void PlaylistSongsWindow::on_pushButton_clicked()
{
    if(selectedSongId == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    PlaylistRepository repository;
    repository.loadFromFile();

    repository.removeSong(playlistId, selectedSongId);

    loadSongs();

    QMessageBox::information(this,
                             "Success",
                             "Song removed successfully.");
}


void PlaylistSongsWindow::on_lineEdit_textChanged(const QString &arg1)
{
    searchText=arg1;
    loadSongs();
}


void PlaylistSongsWindow::on_pushButton_2_clicked()
{
    close();
}


void PlaylistSongsWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    sortText=arg1;
    loadSongs();
}


void PlaylistSongsWindow::on_comboBox_3_currentTextChanged(const QString &arg1)
{
    filtergenre=arg1;
    loadSongs();
}


void PlaylistSongsWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    yearfilter=arg1;
    loadSongs();
}


void PlaylistSongsWindow::on_pushButton_3_clicked()
{
    if(selectedSongId == -1)
        return;

    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(selectedSongId);

    if(!song.has_value())
        return;

    player->setSource(
        QUrl::fromLocalFile(
            QString::fromStdString(song->getFilePath())
            )
        );

    player->play();
}


void PlaylistSongsWindow::on_pushButton_4_clicked()
{
    player->pause();
}


void PlaylistSongsWindow::on_pushButton_5_clicked()
{
    if (currentIndex == -1)
        return;

    if (currentIndex + 1 >= ui->listWidget->count())
        return;

    currentIndex++;

    QListWidgetItem *item = ui->listWidget->item(currentIndex);

    ui->listWidget->setCurrentItem(item);

    on_listWidget_itemClicked(item);

    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(selectedSongId);

    if (song.has_value())
    {
        player->setSource(
            QUrl::fromLocalFile(
                QString::fromStdString(song.value().getFilePath())
                )
            );

        player->play();
    }
}


void PlaylistSongsWindow::on_pushButton_6_clicked()
{
    if (currentIndex <= 0)
        return;

    currentIndex--;

    QListWidgetItem *item = ui->listWidget->item(currentIndex);

    ui->listWidget->setCurrentItem(item);

    on_listWidget_itemClicked(item);

    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(selectedSongId);

    if (song.has_value())
    {
        player->setSource(
            QUrl::fromLocalFile(
                QString::fromStdString(song.value().getFilePath())
                )
            );

        player->play();
    }
}


void PlaylistSongsWindow::on_pushButton_7_clicked()
{
    if (selectedSongId == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(selectedSongId);

    if (!song.has_value())
        return;

    SongProfileWindow *window =
        new SongProfileWindow(song.value());

    window->show();
}

