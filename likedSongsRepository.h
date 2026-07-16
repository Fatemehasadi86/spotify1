#ifndef LIKEDSONGSREPOSITORY_H
#define LIKEDSONGSREPOSITORY_H

#include <vector>

class LikedSongsRepository
{
public:
    LikedSongsRepository();

    void addSong(int listenerId, int songId);

    void removeSong(int listenerId, int songId);

    bool isLiked(int listenerId, int songId);

    std::vector<int> getLikedSongs(int listenerId);

private:

    struct LikedSongs
    {
        int listenerId;
        std::vector<int> songs;
    };

    std::vector<LikedSongs> likedSongsList;

    void loadFromFile();

    void saveToFile();
};

#endif