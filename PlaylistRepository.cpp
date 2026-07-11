#include "PlaylistRepository.h"

using namespace std;

PlaylistRepository::PlaylistRepository() {

}

int PlaylistRepository::save(const Playlist& playlist)
{
    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == playlist.getPlaylistId())
        {
            playlists[i] = playlist;
            return playlist.getPlaylistId();
        }
    }

    playlists.push_back(playlist);
    return playlist.getPlaylistId();
}

bool PlaylistRepository::remove(int id)
{
    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == id)
        {
            playlists.erase(playlists.begin() + i);
            return true;
        }
    }

    return false;
}

std::optional<Playlist> PlaylistRepository::search(int id)
{
    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == id)
        {
            return playlists[i];
        }
    }

    return std::nullopt;
}

bool PlaylistRepository::insertSong(int playlistId, int songId)
{

    return false;
}

bool PlaylistRepository::removeSong(int playlistId, int songId)
{

    return false;
}

vector<Playlist> PlaylistRepository::playlistsByListener(int listenerId)
{
    vector<Playlist> result;

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getOwnerListenerId() == listenerId)
        {
            result.push_back(playlists[i]);
        }
    }

    return result;
}