#include "songprofilewindow.h"
#include "ui_songprofilewindow.h"

SongProfileWindow::SongProfileWindow(Song &song,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SongProfileWindow)
{
    ui->setupUi(this);

    this->song = song;

    ui->label_2->setText(
        QString::fromStdString(song.getName()));

    ui->label_3->setText(
        QString::fromStdString(song.getGenre()));

    ui->label_4->setText(
        QString::number(song.getReleaseYear()));


    QPixmap pixmap(
        QString::fromStdString(song.getImagePath()));

    ui->label->setPixmap(
        pixmap.scaled(
            400,
            400,
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation));
}

SongProfileWindow::~SongProfileWindow()
{
    delete ui;
}

void SongProfileWindow::on_pushButton_clicked()
{
    close();
}

