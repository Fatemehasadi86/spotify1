#include "exploremusicwindow.h"
#include "ui_exploremusicwindow.h"
#include <QListWidgetItem>
#include "ArtistRepository.h"


exploreMusicwindow::exploreMusicwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::exploreMusicwindow)
{
    ui->setupUi(this);
    loadArtists();
}

exploreMusicwindow::~exploreMusicwindow()
{
    delete ui;
}

void exploreMusicwindow::loadArtists()
{
    ui->listWidget->clear();

    ArtistRepository repository;

    std::vector<Account> artists = repository.getAll();
    qDebug()<<"Artists count :"<<artists.size();

    for (int i = 0; i < artists.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem(
            QString::fromStdString(artists[i].getUsername()));

        item->setData(Qt::UserRole, artists[i].getId());

        ui->listWidget->addItem(item);
    }
}