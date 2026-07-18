#include "editsongwindow.h"
#include "ui_editsongwindow.h"
#include "SongRepository.h"
#include "AlbumRepository.h"
#include <QMessageBox>

editsongWindow::editsongWindow(int songId,int artistId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editsongWindow)
{
    ui->setupUi(this);
    this->songId=songId;
    this->artistId=artistId;

    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(songId);

    if (!song.has_value())
        return;


    ui->lineEdit->setText(QString::fromStdString(song->getName()));
    ui->comboBox_2->setCurrentText(QString::fromStdString(song->getGenre()));
    ui->lineEdit_3->setText(QString::number(song->getReleaseYear()));

    AlbumRepository albumRepository;
    albumRepository.loadFromFile();

    std::vector<Album> albums = albumRepository.getAllAlbum();

    ui->comboBox->addItem("Singles");

    for (int i = 0; i < albums.size(); i++)
    {
        if (albums[i].getArtistId() != artistId)
            continue;

        ui->comboBox->addItem(QString::fromStdString(albums[i].getName()));
    }
}

editsongWindow::~editsongWindow()
{
    delete ui;
}

void editsongWindow::on_pushButton_clicked()
{
    SongRepository repository;
    repository.loadFromFile();

    std::optional<Song> song = repository.search(songId);

    if (!song.has_value())
        return;

    Song editedSong = song.value();

    editedSong.setName(ui->lineEdit->text().toStdString());
    editedSong.setGenre(ui->comboBox_2->currentText().toStdString());
    editedSong.setReleaseYear(ui->lineEdit_3->text().toInt());

    AlbumRepository albumRepository;
    albumRepository.loadFromFile();

    std::vector<Album> albums = albumRepository.getAllAlbum();

    int index = ui->comboBox->currentIndex();

    if (index == 0)
    {
        editedSong.setAlbumId(0);
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
                editedSong.setAlbumId(albums[i].getAlbumId());
                break;
            }
        }
    }

    repository.save(editedSong);

    QMessageBox::information(this,
                             "Success",
                             "Song updated successfully.");

    close();
}

