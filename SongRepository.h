#pragma once

#include "AbstractRepository.h"
#include "Song.h"

#include <vector>
#include <optional>

class SongRepository : public AbstractRepository<Song>
{
private:
    std::vector<Song> songs;

public:
    SongRepository();


    int save(const Song& song) override;
    bool remove(int id) override;
    std::optional<Song> search(int id) override;


    std::vector<Song> singleSongs(int artistId);
    std::vector<Song> getByAlbum(int albumId);
    std::vector<Song> getByArtist(int artistId);
    std::vector<Song> getByPlaylist(int playlistId);
    std::vector<Song> getByLikedSongs(int listenerId);
};
