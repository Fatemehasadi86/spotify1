#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "ArtistRepository.h"
#include "ListenerRepository.h"
#include "registerwindow.h"
#include <optional>
#include "artistwindow.h"
#include "listenerwindow.h"

loginwindow::loginwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loginwindow)
{
    ui->setupUi(this);
}

loginwindow::~loginwindow()
{
    delete ui;
}


#include <stdexcept>

void loginwindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_4->text();
    QString password = ui->lineEdit_3->text();

    try
    {
        if (username.isEmpty() || password.isEmpty())
            throw std::runtime_error("Please enter username and password.");

        ArtistRepository artistRepository;
        ListenerRepository listenerRepository;

        listenerRepository.loadFromFile();
        artistRepository.loadFromFile();

        std::optional<Account> artist =
            artistRepository.searchByUserName(username.toStdString());

        std::optional<Account> listener =
            listenerRepository.searchByUserName(username.toStdString());

        if (artist.has_value())
        {
            if (artist->getPassword() == password.toStdString())
            {
                artistWindow *artistw1 = new artistWindow(artist->getId());
                artistw1->show();
                close();
                return;
            }

            throw std::runtime_error("Username or Password is incorrect.");
        }

        if (listener.has_value())
        {
            if (listener->getPassword() == password.toStdString())
            {
                listenerWindow *listwin1 = new listenerWindow(listener->getId());
                listwin1->show();
                close();
                return;
            }

            throw std::runtime_error("Username or Password is incorrect.");
        }

        throw std::runtime_error("Username or Password is incorrect.");
    }
    catch (const std::exception &e)
    {
        QMessageBox::warning(this,"Error", e.what());
    }
}

void loginwindow::on_pushButton_2_clicked()
{
    registerWindow *re = new registerWindow();

    re->show();
}

