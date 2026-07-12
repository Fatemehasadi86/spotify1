#include "ArtistRepository.h"
#include "Artist.h"
#include <fstream>
#include <QDebug>

using namespace std;

ArtistRepository::ArtistRepository()
{
}

int ArtistRepository::save(const Account& account)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == account.getId())
        {
            artists[i] = account;
            return account.getId();
        }
    }

    artists.push_back(account);
    std::ofstream file("accounts.txt", std::ios::app);

    file << account.getId() << std::endl;
    file << account.getFullName() << std::endl;
    file << account.getUsername() << std::endl;
    file << account.getPassword() << std::endl;
    file << "Artist" << std::endl;

    file.close();
    return account.getId();
}

bool ArtistRepository::remove(int id)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == id)
        {
            artists.erase(artists.begin() + i);
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