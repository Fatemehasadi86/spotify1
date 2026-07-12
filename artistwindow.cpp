#include "artistwindow.h"
#include "ui_artistwindow.h"

artistWindow::artistWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::artistWindow)
{
    ui->setupUi(this);
}

artistWindow::~artistWindow()
{
    delete ui;
}

void artistWindow::on_pushButton_clicked()
{

}

