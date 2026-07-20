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


#include <stdexcept>

void registerWindow::on_pushButton_clicked()
{
    try
    {
        QString fullName = ui->lineEdit_4->text();
        QString userName = ui->lineEdit_6->text();
        QString password = ui->lineEdit_5->text();
        QString biography = ui->lineEdit_7->text();

        if(fullName.isEmpty() || userName.isEmpty() || password.isEmpty())
            throw std::runtime_error("Please fill all fields.");

        if(!ui->radioButton_3->isChecked() &&
            !ui->radioButton_4->isChecked())
            throw std::runtime_error("Please choose a role.");

        ListenerRepository listenerRepository;
        ArtistRepository artistRepository;

        listenerRepository.loadFromFile();
        artistRepository.loadFromFile();

        if(listenerRepository.searchByUserName(userName.toStdString()).has_value() ||
            artistRepository.searchByUserName(userName.toStdString()).has_value())
            throw std::runtime_error("This username already exists.");

        if(ui->radioButton_3->isChecked())
        {
            Listener listener;
            listener.setId(listenerRepository.generateNewId());
            listener.setFullName(fullName.toStdString());
            listener.setUsername(userName.toStdString());
            listener.setPassword(password.toStdString());

            listenerRepository.save(listener);
        }

        if(ui->radioButton_4->isChecked())
        {
            Artist artist;

            artist.setId(artistRepository.generateNewId());
            artist.setFullName(fullName.toStdString());
            artist.setUsername(userName.toStdString());
            artist.setPassword(password.toStdString());
            artist.setBiography(biography.toStdString());

            artistRepository.save(artist);
        }

        QMessageBox::information(this, "Success","Account created successfully.");

        close();
    }
    catch(const std::exception &e)
    {
        QMessageBox::warning(this,"Error",e.what());
    }
}


void registerWindow::on_pushButton_2_clicked()
{
    close();
}

