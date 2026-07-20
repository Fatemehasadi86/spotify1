#include "ListenerRepository.h"
#include <fstream>
#include "Listener.h"
#include "ArtistRepository.h"

using namespace std;

ListenerRepository::ListenerRepository()
{
}


void ListenerRepository::saveToFile()
{
    ArtistRepository artistRepository;
    artistRepository.loadFromFile();

    std::vector<Account> artists = artistRepository.getAll();

    std::ofstream file("accounts.txt");

    if (!file.is_open())
        return;

    // اول Artist ها
    for (int i = 0; i < artists.size(); i++)
    {
        file << artists[i].getId() << std::endl;
        file << artists[i].getFullName() << std::endl;
        file << artists[i].getUsername() << std::endl;
        file << artists[i].getPassword() << std::endl;
        file << "Artist" << std::endl;
    }

    // بعد Listener ها
    for (int i = 0; i < listeners.size(); i++)
    {
        file << listeners[i].getId() << std::endl;
        file << listeners[i].getFullName() << std::endl;
        file << listeners[i].getUsername() << std::endl;
        file << listeners[i].getPassword() << std::endl;
        file << "Listener" << std::endl;
    }

    file.close();
}


int ListenerRepository::save(const Account& account)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getId() == account.getId())
        {
            listeners[i] = account;
            saveToFile();
            return account.getId();
        }
    }

    listeners.push_back(account);

    saveToFile();

    return account.getId();
}

bool ListenerRepository::remove(int id)
{
    for (int i = 0; i < listeners.size(); i++)
    {
        if (listeners[i].getId() == id)
        {
            listeners.erase(listeners.begin() + i);
            saveToFile();
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

std::vector<Account> ListenerRepository::getAll()
{
    loadFromFile();

    return listeners;
}