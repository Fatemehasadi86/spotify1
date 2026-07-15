#include "PlayList.h"


Playlist::Playlist(int playlistId,
                   int ownerListenerId,
                   const std::string& name)
{
    this->playlistId = playlistId;
    this->ownerListenerId = ownerListenerId;
    this->name = name;
}


int Playlist::getPlaylistId() const
{
    return playlistId;
}


int Playlist::getOwnerListenerId() const
{
    return ownerListenerId;
}


std::string Playlist::getName() const
{
    return name;
}


void Playlist::setName(const std::string& name)
{
    this->name = name;
}


void Playlist::addSong(const Song& song)
{
    songs.push_back(song);
}


bool Playlist::removeSong(int songId)
{
    for(auto it = songs.begin(); it != songs.end(); ++it)
    {
        if(it->getId() == songId)
        {
            songs.erase(it);
            return true;
        }
    }

    return false;
}


const std::vector<Song>& Playlist::getSongs() const
{
    return songs;
}

