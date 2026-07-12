#ifndef LISTENERREPOSITORY_H
#define LISTENERREPOSITORY_H

#include "AccountRepository.h"
#include "Account.h"

#include <vector>
#include <optional>

class ListenerRepository : public AccountRepository
{
private:
    std::vector<Account> listeners;

public:
    ListenerRepository();


    int save(const Account& account) override;
    bool remove(int id) override;
    std::optional<Account> search(int id) override;
    std::optional<Account> searchByUserName(const std::string& userName) override;


    void updateLiked(int listenerId, int songId, bool liked);
    void loadFromFile();
    bool isLiked(int listenerId, int songId);
};

#endif