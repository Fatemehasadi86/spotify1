#ifndef PLAYLISTREPOSITORY_H
#define PLAYLISTREPOSITORY_H

#include "AbstractRepository.h"
#include "PlayList.h"

#include <vector>
#include <optional>

class PlaylistRepository : public AbstractRepository<Playlist>
{
private:
    std::vector<Playlist> playlists2;

public:
    PlaylistRepository();


    int save(const Playlist& playlist) override;
    bool remove(int id) override;
    std::optional<Playlist> search(int id) override;


    bool insertSong(int playlistId, int songId);
    bool removeSong(int playlistId, int songId);
    void loadFromFile();
    void saveToFile();
    std::vector<Playlist> playlists(int listenerId);
    std::vector<Playlist> getAllPlaylist();
};

#endif