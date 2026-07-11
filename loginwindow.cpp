#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "ArtistRepository.h"
#include "ListenerRepository.h"
#include "registerwindow.h"
#include <optional>

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


void loginwindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_4->text();
    QString password = ui->lineEdit_3->text();

    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please enter username and password.");
        return;
    }

    ArtistRepository artistRepository;
    ListenerRepository listenerRepository;

    // listenerRepository.loadFromFile();
    // artistRepository.loadFromFile();

    std::optional artist = artistRepository.searchByUserName(username.toStdString());

    if (artist.has_value())
    {
        if (artist->getPassword() == password.toStdString())
        {
            QMessageBox::information(this,
                                     "Success",
                                     "Welcome Artist!");
            return;
        }
    }

    std::optional listener = listenerRepository.searchByUserName(username.toStdString());

    if (listener.has_value())
    {
        if (listener->getPassword() == password.toStdString())
        {
            QMessageBox::information(this,
                                     "Success",
                                     "Welcome Listener!");
            return;
        }
    }

    QMessageBox::warning(this,
                         "Error",
                         "Username or Password is incorrect.");
}


void loginwindow::on_pushButton_2_clicked()
{
    registerWindow *re = new registerWindow();

    re->show();
}

