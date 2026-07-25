#include "likedsongwindow.h"
#include "ui_likedsongwindow.h"
#include <QListWidgetItem>
#include<QMessageBox>
#include "SongRepository.h"
#include "ListenerRepository.h"

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


void LikedSongWindow::loadSongs()
{
    ui->listWidget->clear();

    SongRepository songRepository;
    songRepository.loadFromFile();

    ListenerRepository listenerRepository;

    std::vector<Song> allSongs = songRepository.getAllSongs();

    for(int i = 0; i < allSongs.size(); i++)
    {
        if(!listenerRepository.isLiked(listenerId, allSongs[i].getId()))
            continue;

        QString name = QString::fromStdString(allSongs[i].getName());

        if(!searchText.isEmpty() &&
            !name.contains(searchText, Qt::CaseInsensitive))
            continue;

        QListWidgetItem *item = new QListWidgetItem(name);

        item->setData(Qt::UserRole, allSongs[i].getId());

        ui->listWidget->addItem(item);
    }
}

void LikedSongWindow::on_pushButton_2_clicked()
{
    if (selectedSongId == 0)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    ListenerRepository repository;

    repository.updateLiked(listenerId, selectedSongId, false);

    selectedSongId = 0;

    loadSongs();

    QMessageBox::information(this,
                             "Success",
                             "Song removed from liked songs.");
}