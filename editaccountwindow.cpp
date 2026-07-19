#include "editaccountwindow.h"
#include "ui_editaccountwindow.h"
#include "ListenerRepository.h"

EditAccountwindow::EditAccountwindow(int accountId,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditAccountwindow)
{
    ui->setupUi(this);
    ListenerRepository repository;
    repository.loadFromFile();

    std::optional<Account> account=repository.search(accountId);

    if(!account.has_value()){
        return;
    }
}

EditAccountwindow::~EditAccountwindow()
{
    delete ui;
}
