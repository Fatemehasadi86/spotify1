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
        file << artists[i].getBiography() << std::endl;
        file << artists[i].getProfileImage() << std ::endl;
        file << "Artist" << std::endl;
    }

    // بعد Listener ها
    for (int i = 0; i < listeners.size(); i++)
    {
        file << listeners[i].getId() << std::endl;
        file << listeners[i].getFullName() << std::endl;
        file << listeners[i].getUsername() << std::endl;
        file << listeners[i].getPassword() << std::endl;
        file << listeners[i].getBiography() << std::endl;
        file << listeners[i].getProfileImage() << std ::endl;
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
    std::string biography;
    std::string profileImage;

    while (file >> id)
    {
        file.ignore();

        getline(file, fullName);
        getline(file, userName);
        getline(file, password);
        getline(file,biography);
        getline(file,profileImage);
        getline(file, type);



        if (type == "Listener")
        {
            Listener listener;
            listener.setId(id);
            listener.setFullName(fullName);
            listener.setUsername(userName);
            listener.setPassword(password);
            listener.setBiography(biography);
            listener.setProfileImage(profileImage);
            listeners.push_back(listener);
        }
    }

    file.close();
}



std::vector<Account> ListenerRepository::getAll()
{
    loadFromFile();

    return listeners;
}


void ListenerRepository::updateLiked(int listenerId, int songId, bool liked)
{
    std::vector<int> listenerIds;
    std::vector<int> songIds;

    std::ifstream in("likedSongs.txt");

    int lId, sId;

    while (in >> lId >> sId)
    {
        listenerIds.push_back(lId);
        songIds.push_back(sId);
    }

    in.close();

    bool found = false;

    for (int i = 0; i < listenerIds.size(); i++)
    {
        if (listenerIds[i] == listenerId &&
            songIds[i] == songId)
        {
            found = true;

            if (!liked)
            {
                listenerIds.erase(listenerIds.begin() + i);
                songIds.erase(songIds.begin() + i);
            }

            break;
        }
    }

    if (liked && !found)
    {
        listenerIds.push_back(listenerId);
        songIds.push_back(songId);
    }

    std::ofstream out("likedSongs.txt");

    for (int i = 0; i < listenerIds.size(); i++)
    {
        out << listenerIds[i] << std::endl;
        out << songIds[i] << std::endl;
    }

    out.close();
}

bool ListenerRepository::isLiked(int listenerId, int songId)
{
    std::ifstream file("likedSongs.txt");

    int lId, sId;

    while (file >> lId >> sId)
    {
        if (lId == listenerId && sId == songId)
            return true;
    }

    return false;
}

