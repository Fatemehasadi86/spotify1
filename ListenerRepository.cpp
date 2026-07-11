#include "ListenerRepository.h"

using namespace std;

ListenerRepository::ListenerRepository()
{
}

int ListenerRepository::save(const Account& account)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getId() == account.getId())
        {
            listeners[i] = account;
            return account.getId();
        }
    }

    listeners.push_back(account);
    return account.getId();
}

bool ListenerRepository::remove(int id)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getId() == id)
        {
            listeners.erase(listeners.begin() + i);
            return true;
        }
    }

    return false;
}

std::optional<Account> ListenerRepository::search(int id)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getId() == id)
        {
            return listeners[i];
        }
    }

    return std::nullopt;
}

std::optional<Account> ListenerRepository::searchByUserName(const std::string& userName)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getUsername() == userName)
        {
            return listeners[i];
        }
    }

    return std::nullopt;
}

void ListenerRepository::updateLiked(int listenerId, int songId, bool liked)
{

}

bool ListenerRepository::isLiked(int listenerId, int songId)
{

    return false;
}