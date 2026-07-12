#pragma once

#include "AccountRepository.h"
#include <vector>
#include <optional>

class ArtistRepository : public AccountRepository
{
private:
    std::vector<Account> artists;

public:
    ArtistRepository();

    int save(const Account& account) override;
    bool remove(int id) override;
    void loadFromFile();
    std::optional<Account> search(int id) override;
    std::optional<Account> searchByUserName(const std::string& userName) override;
};