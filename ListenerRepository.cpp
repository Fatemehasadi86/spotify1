#include "ListenerRepository.h"
#include <fstream>
#include "Listener.h"

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

    std::ofstream file("accounts.txt", std::ios::app);

    file << account.getId() << std::endl;
    file << account.getFullName() << std::endl;
    file << account.getUsername() << std::endl;
    file << account.getPassword() << std::endl;
    file << "Listener" << std::endl;

    file.close();

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

void ListenerRepository::loadFromFile(){
    listeners.clear();

    std::ifstream file("accounts.txt");

    if (!file.is_open())
        return;

    int id;
    std::string fullName;
    std::string userName;
    std::string password;
    std::string type;

    while (file >> id)
    {
        file.ignore();

        getline(file, fullName);
        getline(file, userName);
        getline(file, password);
        getline(file, type);

        if (type == "Listener")
        {
            Listener listener;
            listener.setId(id);
            listener.setFullName(fullName);
            listener.setUsername(userName);
            listener.setPassword(password);
            listeners.push_back(listener);
        }
    }

    file.close();
}

void ListenerRepository::updateLiked(int listenerId, int songId, bool liked)
{

}

bool ListenerRepository::isLiked(int listenerId, int songId)
{
    return false;
}