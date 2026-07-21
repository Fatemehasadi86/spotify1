#pragma once

#include "AbstractRepository.h"
#include "Account.h"

#include <optional>
#include <string>

class AccountRepository : public AbstractRepository<Account>
{
public:
    AccountRepository();

    virtual int save(const Account& account) = 0;

    virtual bool remove(int id) = 0;

    virtual std::optional<Account> search(int id) = 0;

    virtual std::optional<Account> searchByUserName(const std::string& userName) = 0;

    int generateNewId();
};


