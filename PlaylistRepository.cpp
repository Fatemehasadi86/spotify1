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

    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getPlaylistId() == playlist.getPlaylistId())
        {
            playlists2[i] = playlist;
            saveToFile();
            return playlist.getPlaylistId();
        }
    }

    playlists2.push_back(playlist);
    saveToFile();

    return playlist.getPlaylistId();
}

bool PlaylistRepository::remove(int id)
{
    loadFromFile();

    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getPlaylistId() == id)
        {
            playlists2.erase(playlists2.begin() + i);
            saveToFile();
            return true;
        }
    }

    return false;
}

std::optional<Playlist> PlaylistRepository::search(int id)
{
    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getPlaylistId() == id)
        {
            return playlists2[i];
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

    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getPlaylistId() == playlistId)
        {
            playlists2[i].addSong(song.value());

            saveToFile();

            return true;
        }
    }

    return false;
}

vector<Playlist> PlaylistRepository::playlists(int listenerId)
{
    vector<Playlist> result;

    loadFromFile();

    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getOwnerListenerId() == listenerId)
        {
            result.push_back(playlists2[i]);
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

    for (int i = 0; i < playlists2.size(); i++)
    {
        file << playlists2[i].getPlaylistId() << std::endl;
        file << playlists2[i].getName() << std::endl;
        file << playlists2[i].getOwnerListenerId() << std::endl;

        file << playlists2[i].getSongs().size() << std::endl;

        for (const Song &song : playlists2[i].getSongs())
        {
            file << song.getId() << std::endl;
        }
    }

    file.close();
}


void PlaylistRepository::loadFromFile()
{
    playlists2.clear();

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

        playlists2.push_back(playlist);
    }

    file.close();
}



std::vector<Playlist> PlaylistRepository::getAllPlaylist()
{
    loadFromFile();
    return playlists2;
}

bool PlaylistRepository::removeSong(int playlistId, int songId)
{
    loadFromFile();

    for (int i = 0; i < playlists2.size(); i++)
    {
        if (playlists2[i].getPlaylistId() == playlistId)
        {
            bool removed = playlists2[i].removeSong(songId);

            if (removed)
            {
                saveToFile();
            }

            return removed;
        }
    }

    return false;
}