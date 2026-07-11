#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QMessageBox>
#include "Listener.h"
#include "Artist.h"
#include "ArtistRepository.h"
#include "ListenerRepository.h"

registerWindow::registerWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
}

registerWindow::~registerWindow()
{
    delete ui;
}

void registerWindow::on_pushButton_clicked()
{
    QString fullName = ui->lineEdit_4->text();
    QString userName = ui->lineEdit_5->text();
    QString password = ui->lineEdit_6->text();
    QString biography = ui->lineEdit_7->text();

    // بررسی خالی نبودن فیلدها
    if(fullName.isEmpty() || userName.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this,"Error","Please fill all fields.");
        return;
    }

    // بررسی انتخاب نقش
    if(!ui->radioButton_3->isChecked() &&
        !ui->radioButton_4->isChecked())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please choose a role.");
        return;
    }

    // بررسی تکراری نبودن نام کاربری

    ListenerRepository listenerRepository;
    ArtistRepository artistRepository;

    // listenerRepository.loadFromFile();
    // artistRepository.loadFromFile();

    if(listenerRepository.searchByUserName(userName.toStdString()).has_value() ||
        artistRepository.searchByUserName(userName.toStdString()).has_value())
    {
        QMessageBox::warning(this,
                             "Error",
                             "This username already exists.");
        return;
    }

    // اگر Listener باشد
    if(ui->radioButton_3->isChecked())
    {
        Listener listener;

        listener.setFullName(fullName.toStdString());
        listener.setUsername(userName.toStdString());
        listener.setPassword(password.toStdString());

        listenerRepository.save(listener);
    }

    // اگر Artist باشد
    if(ui->radioButton_4->isChecked())
    {
        Artist artist;

        artist.setFullName(fullName.toStdString());
        artist.setUsername(userName.toStdString());
        artist.setPassword(password.toStdString());
        artist.setBiography(biography.toStdString());

        artistRepository.save(artist);
    }

    QMessageBox::information(this,
                             "Success",
                             "Account created successfully.");

    close();
}