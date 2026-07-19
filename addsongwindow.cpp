#include "addsongwindow.h"
#include "ui_addsongwindow.h"
#include "Song.h"
#include "SongRepository.h"
#include <QMessageBox>
#include "AlbumRepository.h"

addSongWindow::addSongWindow(int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addSongWindow)
{
    ui->setupUi(this);
    this->artistId=artistId;

    AlbumRepository repository;
    repository.loadFromFile();

    ui->comboBox->addItem("Singles");

    std::vector<Album> albums = repository.getAllAlbum();

    for (int i = 0; i < albums.size(); i++)
    {
           if (albums[i].getArtistId() != artistId)
            continue;

        ui->comboBox->addItem(QString::fromStdString(albums[i].getName()));
    }
}

addSongWindow::~addSongWindow()
{
    delete ui;
}

void addSongWindow::on_pushButton_4_clicked()
{
    close();
}


void addSongWindow::on_pushButton_3_clicked()
{
    QString name = ui->lineEdit->text();
    QString genre =ui->comboBox_2->currentText();

    QString year = ui->lineEdit_3->text();

    if(name.isEmpty() || genre.isEmpty() || year.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please fill all fields.");
        return;
    }

    Song song;

    song.setName(name.toStdString());
    song.setGenre(genre.toStdString());
    song.setReleaseYear(year.toInt());

    AlbumRepository albumRepository;
    albumRepository.loadFromFile();

    std::vector<Album> albums = albumRepository.getAllAlbum();

    int index = ui->comboBox->currentIndex();

    if(index == 0)
    {
        song.setAlbumId(0);
    }
    else
    {
        int count = 0;

        for (int i = 0; i < albums.size(); i++)
        {
            if (albums[i].getArtistId() != artistId)
                continue;

            count++;

            if (count == index)
            {
                song.setAlbumId(albums[i].getAlbumId());
                break;
            }
        }
    }
    song.setArtistId(artistId);

    SongRepository repository;
    repository.loadFromFile();

    int newId = repository.getAllSongs().size() + 1;

    song.setId(newId);

    repository.save(song);

    QMessageBox::information(this,"Success"," Song added successfully ");

    close();
}

