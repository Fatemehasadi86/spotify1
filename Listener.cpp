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
    for(auto it = likedSongs.begin(); it != likedSongs.end(); ++it)
    {
        if(*it == songId)
        {
            likedSongs.erase(it);
            return;
        }
    }
}

const std::vector<int>& Listener::getLikedSongs() const
{
    return likedSongs;
}