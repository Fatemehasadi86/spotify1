#include "PlaylistRepository.h"
#include <fstream>
#include "SongRepository.h"
#include <algorithm>

using namespace std;

PlaylistRepository::PlaylistRepository() {

}

int PlaylistRepository::save(const Playlist& playlist)
{
    loadFromFile();

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == playlist.getPlaylistId())
        {
            playlists[i] = playlist;
            saveToFile();
            return playlist.getPlaylistId();
        }
    }

    playlists.push_back(playlist);
    saveToFile();

    return playlist.getPlaylistId();
}

bool PlaylistRepository::remove(int id)
{
    loadFromFile();

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == id)
        {
            playlists.erase(playlists.begin() + i);
            saveToFile();
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
    loadFromFile();

    SongRepository songRepository;
    songRepository.loadFromFile();

    std::optional<Song> song = songRepository.search(songId);

    if (!song.has_value())
        return false;

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == playlistId)
        {
            playlists[i].addSong(song.value());

            saveToFile();

            return true;
        }
    }

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

    std::sort(result.begin(), result.end(),
              [](const Playlist &a, const Playlist &b)
              {
                  return a.getName() < b.getName();
              });

    return result;
}


void PlaylistRepository::saveToFile()
{
    std::ofstream file("playlists.txt");

    for (int i = 0; i < playlists.size(); i++)
    {
        file << playlists[i].getPlaylistId() << std::endl;
        file << playlists[i].getName() << std::endl;
        file << playlists[i].getOwnerListenerId() << std::endl;

        file << playlists[i].getSongs().size() << std::endl;

        for (const Song &song : playlists[i].getSongs())
        {
            file << song.getId() << std::endl;
        }
    }

    file.close();
}


void PlaylistRepository::loadFromFile()
{
    playlists.clear();

    std::ifstream file("playlists.txt");

    if (!file.is_open())
        return;

    SongRepository songRepository;
    songRepository.loadFromFile();

    int playlistId;
    std::string name;
    int ownerListenerId;
    int songCount;

    while (file >> playlistId)
    {
        file.ignore();

        getline(file, name);

        file >> ownerListenerId;
        file >> songCount;
        file.ignore();

        Playlist playlist(playlistId, ownerListenerId, name);

        for (int i = 0; i < songCount; i++)
        {
            int songId;
            file >> songId;
            file.ignore();

            std::optional<Song> song = songRepository.search(songId);

            if (song.has_value())
            {
                playlist.addSong(song.value());
            }
        }

        playlists.push_back(playlist);
    }

    file.close();
}



std::vector<Playlist> PlaylistRepository::getAllPlaylist()
{
    loadFromFile();
    return playlists;
}

bool PlaylistRepository::removeSong(int playlistId, int songId)
{
    loadFromFile();

    for (int i = 0; i < playlists.size(); i++)
    {
        if (playlists[i].getPlaylistId() == playlistId)
        {
            bool removed = playlists[i].removeSong(songId);

            if (removed)
            {
                saveToFile();
            }

            return removed;
        }
    }

    return false;
}