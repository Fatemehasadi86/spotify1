
#pragma once

#include "Song.h"
#include <vector>
#include <string>

class Playlist
{
private:
    int playlistId;
    int ownerListenerId;
    std::string name;

    std::vector<Song> songs;

public:

    Playlist(int playlistId,
             int ownerListenerId,
             const std::string& name);


    int getPlaylistId() const;
    int getOwnerListenerId() const;
    std::string getName() const;


    void setName(const std::string& name);


    void addSong(const Song& song);
    bool removeSong(int songId);


    const std::vector<Song>& getSongs() const;
};
