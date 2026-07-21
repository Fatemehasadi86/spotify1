#pragma once

#include "AbstractRepository.h"
#include "Song.h"
#include <optional>
#include <vector>


struct LikedSongs
{
    int listenerId;
    std::vector<int> songs;
};

class SongRepository : public AbstractRepository<Song>
{
private:
    std::vector<Song> songs;

public:
    SongRepository();
    int save(const Song& song) override;
    bool remove(int id) override;
    std::optional<Song> search(int id) override;

    void loadFromFile();
    void saveToFile();


    std::vector<Song> singleSongs(int artistId);
    std::vector<Song> getByAlbum(int albumId);
    std::vector<Song> getByArtist(int artistId);
    std::vector<Song> getByPlaylist(int playlistId);
    std::vector<Song> getByLikedSongs(int listenerId);
    std::vector<Song> getAllSongs();
    void saveLikedSongs(std::vector <LikedSongs> likedSongsList);
    std::vector<LikedSongs> loadLikedSongs();

    void likeSong(int listenerId, int songId);
    void unlikeSong(int listenerId, int songId);
    bool isLiked(int listenerId, int songId);

};
