#include "addalbumwindow.h"
#include "ui_addalbumwindow.h"

AddAlbumWindow::AddAlbumWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddAlbumWindow)
{
    ui->setupUi(this);
}

AddAlbumWindow::~AddAlbumWindow()
{
    delete ui;
}
