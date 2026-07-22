#include "albumwindow.h"
#include "ui_albumwindow.h"
#include "SongRepository.h"
#include <QMessageBox>
#include "editsongwindow.h"
#include "AlbumRepository.h"
#include <QIcon>
#include <QPixmap>
#include "songprofilewindow.h"

albumWindow::albumWindow(int albumId,int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::albumWindow)
{
    ui->setupUi(this);
    audioOutput = new QAudioOutput(this);
    player = new QMediaPlayer(this);

    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(0.7);

    ui->listWidget->setIconSize(QSize(120,120));
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

    if (sortType == "Name (A_Z)")
    {
        std::sort(songs.begin(), songs.end(),
                  [](Song a, Song b)
                  {
                      return a.getName() < b.getName();
                  });
    }
    else if (sortType == "Year (New_old)")
    {
        std::sort(songs.begin(), songs.end(),
                  [](Song a, Song b)
                  {
                      return a.getReleaseYear() > b.getReleaseYear();
                  });
    }

    for (int i = 0; i < songs.size(); i++)
    {
        QString name = QString::fromStdString(songs[i].getName());
        QString genre = QString::fromStdString(songs[i].getGenre());
        QString year = QString::number(songs[i].getReleaseYear());

        if (!name.contains(searchText))
            continue;

        if (genreFilter != "All" && genre != genreFilter)
            continue;

        if (yearFilter != "All" && year != yearFilter)
            continue;

        QPixmap pixmap(QString::fromStdString(songs[i].getImagePath()));

        QIcon icon(pixmap);

        QListWidgetItem *item = new QListWidgetItem(icon, name);

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

    QString songName = item->text();

    SongRepository repository;

    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    int songId = 0;

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            songId = songs[i].getId();
            break;
        }
    }

    int reply = QMessageBox::question(
        this,
        "Delete Song",
        "Are you sure you want to delete this song?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No)
        return;


    if (repository.remove(songId))
    {
        loadSong();

        QMessageBox::information(this, "Success","Song deleted successfully.");
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

    QString songName = item->text();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    int songId = 0;

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            songId = songs[i].getId();
            break;
        }
    }

    editsongWindow *w = new editsongWindow(songId,artistId);

    w->setAttribute(Qt::WA_DeleteOnClose);

    connect(w, &QObject::destroyed, this, [=]()
            {
                loadSong();
            });

    w->show();
}


void albumWindow::on_lineEdit_textChanged(const QString &text)
{
    searchText=text;
    loadSong();
}

void albumWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    genreFilter = arg1;
    loadSong();
}




void albumWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    yearFilter = arg1;
    loadSong();
}


void albumWindow::on_comboBox_3_currentTextChanged(const QString &arg1)
{
    sortType=arg1;
    loadSong();
}


void albumWindow::on_pushButton_5_clicked()
{
    if (ui->listWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    QListWidgetItem *item = ui->listWidget->selectedItems().first();

    QString songName = item->text();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            player->setSource(
                QUrl::fromLocalFile(
                    QString::fromStdString(songs[i].getFilePath())
                    )
                );

            player->play();

            break;
        }
    }
}


void albumWindow::on_pushButton_6_clicked()
{
    player->pause();
}


void albumWindow::on_pushButton_7_clicked()
{
    int row = ui->listWidget->currentRow();

    if (row == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    if (row >= ui->listWidget->count() - 1)
        return;

    ui->listWidget->setCurrentRow(row + 1);

    QListWidgetItem *item = ui->listWidget->currentItem();

    QString songName = item->text();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            player->setSource(
                QUrl::fromLocalFile(
                    QString::fromStdString(songs[i].getFilePath())
                    )
                );

            player->play();

            break;
        }
    }
}


void albumWindow::on_pushButton_8_clicked()
{
    int row = ui->listWidget->currentRow();

    if (row == -1)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    if (row == 0)
        return;

    ui->listWidget->setCurrentRow(row - 1);

    QListWidgetItem *item = ui->listWidget->currentItem();

    QString songName = item->text();

    SongRepository repository;
    repository.loadFromFile();

    std::vector<Song> songs = repository.getAllSongs();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getName() == songName.toStdString())
        {
            player->setSource(
                QUrl::fromLocalFile(
                    QString::fromStdString(songs[i].getFilePath())
                    )
                );

            player->play();

            break;
        }
    }
}


void albumWindow::on_pushButton_9_clicked()
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

    SongProfileWindow *window = new SongProfileWindow(song.value());

    window->show();
}





void albumWindow::on_listWidget_itemClicked(QListWidgetItem *item)
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

