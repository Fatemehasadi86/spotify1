#include "ArtistRepository.h"
#include "Artist.h"
#include <fstream>
#include "ListenerRepository.h"



using namespace std;

ArtistRepository::ArtistRepository()
{
}

std::vector<Account> ArtistRepository::getAll()
{
    loadFromFile();

    return artists;
}

void ArtistRepository::saveToFile()
{
    ListenerRepository listenerRepository;
    listenerRepository.loadFromFile();

    std::vector<Account> listeners = listenerRepository.getAll();

    std::ofstream file("accounts.txt");

    if (!file.is_open())
        return;

    // اول Listener ها
    for (int i = 0; i < listeners.size(); i++)
    {
        file << listeners[i].getId() << std::endl;
        file << listeners[i].getFullName() << std::endl;
        file << listeners[i].getUsername() << std::endl;
        file << listeners[i].getPassword() << std::endl;
        file << "Listener" << std::endl;
    }

    // بعد Artist ها
    for (int i = 0; i < artists.size(); i++)
    {
        file << artists[i].getId() << std::endl;
        file << artists[i].getFullName() << std::endl;
        file << artists[i].getUsername() << std::endl;
        file << artists[i].getPassword() << std::endl;
        file << "Artist" << std::endl;
    }

    file.close();
}

int ArtistRepository::save(const Account& account)
{
    loadFromFile();

    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == account.getId())
        {
            artists[i] = account;
            saveToFile();
            return account.getId();
        }
    }

    artists.push_back(account);
    saveToFile();
    return account.getId();
}

bool ArtistRepository::remove(int id)
{
    loadFromFile();

    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == id)
        {
            artists.erase(artists.begin() + i);

            saveToFile();

            return true;
        }
    }

    return false;
}

std::optional<Account> ArtistRepository::search(int id)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == id)
        {
            return artists[i];
        }
    }

    return std::nullopt;
}


std::optional<Account> ArtistRepository::searchByUserName(const std::string& userName)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getUsername() == userName)
        {
            return artists[i];
        }
    }

    return std::nullopt;
}

void ArtistRepository::loadFromFile(){
    artists.clear();

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

        if (type == "Artist")
        {
            Artist artist;
            artist.setId(id);
            artist.setFullName(fullName);
            artist.setUsername(userName);
            artist.setPassword(password);
            artists.push_back(artist);
        }
    }

    file.close();
}

