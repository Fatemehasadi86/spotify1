#include "Listener.h"

Listener::Listener()
{
}

Listener::Listener(int id,std::string fullName,std::string userName,
                   std::string password,std:: string biography1)
    : Account(id, fullName, userName, password)
{
    this->biography=biography1;
}


void Listener::addLikedSong(int songId)
{
    likedSongs.push_back(songId);
}

void Listener::removeLikedSong(int songId)
{
    for (int i = 0; i < likedSongs.size(); i++)
    {
        if (likedSongs[i] == songId)
        {
            likedSongs.erase(likedSongs.begin() + i);
            return;
        }
    }
}

const std::vector<int>& Listener::getLikedSongs() const
{
    return likedSongs;
}