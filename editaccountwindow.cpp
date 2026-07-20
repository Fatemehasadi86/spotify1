#include "editaccountwindow.h"
#include "ui_editaccountwindow.h"
#include "ListenerRepository.h"
#include "ArtistRepository.h"
#include <QMessageBox>
#include "editaccountwindow.h"
#include "ui_editaccountwindow.h"
#include "ArtistRepository.h"
#include "ListenerRepository.h"


EditAccountwindow::EditAccountwindow(int accountId, bool isArtist, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditAccountwindow)
{
    ui->setupUi(this);

    this->accountId = accountId;
    this->isArtist = isArtist;

    std::optional<Account> account;

    if (isArtist)
    {
        ArtistRepository repository;
        repository.loadFromFile();

        account = repository.search(accountId);
    }
    else
    {
        ListenerRepository repository;
        repository.loadFromFile();

        account = repository.search(accountId);
    }

    if (!account.has_value())
        return;

    ui->lineEdit->setText(
        QString::fromStdString(account->getFullName()));

    ui->lineEdit_2->setText(
        QString::fromStdString(account->getUsername()));

    ui->lineEdit_3->setText(
        QString::fromStdString(account->getPassword()));

    ui->lineEdit_4->setText(
        QString::fromStdString(account->getBiography()));
}

EditAccountwindow::~EditAccountwindow()
{
    delete ui;
}

void EditAccountwindow::on_pushButton_clicked()
{
    if (isArtist)
    {
        ArtistRepository repository;
        repository.loadFromFile();

        std::optional<Account> account = repository.search(accountId);

        if (!account.has_value())
            return;

        Account editedAccount = account.value();

        editedAccount.setFullName(ui->lineEdit->text().toStdString());
        editedAccount.setUsername(ui->lineEdit_2->text().toStdString());
        editedAccount.setPassword(ui->lineEdit_3->text().toStdString());
        editedAccount.setBiography(ui->lineEdit_4->text().toStdString());

        repository.save(editedAccount);
    }
    else
    {
        ListenerRepository repository;
        repository.loadFromFile();

        std::optional<Account> account = repository.search(accountId);

        if (!account.has_value())
            return;

        Account editedAccount = account.value();

        editedAccount.setFullName(ui->lineEdit->text().toStdString());
        editedAccount.setUsername(ui->lineEdit_2->text().toStdString());
        editedAccount.setPassword(ui->lineEdit_3->text().toStdString());
        editedAccount.setBiography(ui->lineEdit_4->text().toStdString());

        repository.save(editedAccount);
    }

    QMessageBox::information(this,
                             "Success",
                             "Account updated successfully.");

    close();
}