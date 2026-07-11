#include "SongRepository.h"

using namespace std;

SongRepository::SongRepository()
{
}

int SongRepository::save(const Song& song)
{
    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getId() == song.getId())
        {
            songs[i] = song;
            return song.getId();
        }
    }

    songs.push_back(song);
    return song.getId();
}

bool SongRepository::remove(int id)
{
    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getId() == id)
        {
            songs.erase(songs.begin() + i);
            return true;
        }
    }

    return false;
}

std::optional<Song> SongRepository::search(int id)
{
    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getId() == id)
        {
            return songs[i];
        }
    }

    return std::nullopt;
}

vector<Song> SongRepository::singleSongs(int artistId)
{
    vector<Song> result;

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getArtistId() == artistId &&
            songs[i].getAlbumId() == 0)
        {
            result.push_back(songs[i]);
        }
    }

    return result;
}

vector<Song> SongRepository::getByAlbum(int albumId)
{
    vector<Song> result;

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getAlbumId() == albumId)
        {
            result.push_back(songs[i]);
        }
    }

    return result;
}

vector<Song> SongRepository::getByArtist(int artistId)
{
    vector<Song> result;

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getArtistId() == artistId)
        {
            result.push_back(songs[i]);
        }
    }

    return result;
}

vector<Song> SongRepository::getByPlaylist(int playlistId)
{
    vector<Song> result;
    return result;
}

vector<Song> SongRepository::getByLikedSongs(int listenerId)
{
    vector<Song> result;

    return result;
}