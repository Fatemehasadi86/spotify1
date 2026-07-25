#include "profilewindow.h"
#include "ui_profilewindow.h"

ProfileWindow::ProfileWindow(Account account,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProfileWindow)
{
    ui->setupUi(this);

    QPixmap pixmap(
        QString::fromStdString(account.getProfileImage()));

    ui->label->setPixmap(
        pixmap.scaled(
            ui->label->size(),
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation));

    ui->label_2->setText(QString::fromStdString(account.getFullName()));

    ui->label_3->setText(QString::fromStdString(account.getUsername()));

    ui->label_4->setText(QString::fromStdString(account.getPassword()));

    ui->label_5->setText(QString::fromStdString(account.getBiography()));
}

ProfileWindow::~ProfileWindow()
{
    delete ui;
}

void ProfileWindow::on_pushButton_clicked()
{
    close();
}

