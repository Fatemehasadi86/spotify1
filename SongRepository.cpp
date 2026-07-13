#include "SongRepository.h"
#include <fstream>

using namespace std;

SongRepository::SongRepository()
{
    loadFromFile();
}

int SongRepository::save(const Song& song)
{
    loadFromFile();

    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i].getId() == song.getId())
        {
            songs[i] = song;
            saveToFile();
            return song.getId();
        }
    }

    songs.push_back(song);
    saveToFile();
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

void SongRepository::saveToFile()
{
    std::ofstream file("songs.txt");

    for (int i = 0; i < songs.size(); i++)
    {
        file << songs[i].getId() << std::endl;
        file << songs[i].getName() << std::endl;
        file << songs[i].getReleaseYear() << std::endl;
        file << songs[i].getGenre() << std::endl;
        file << songs[i].getFilePath() << std::endl;
        file << songs[i].getArtistId() << std::endl;
        file << songs[i].getAlbumId() << std::endl;
        file << songs[i].getImagePath() << std::endl;
    }

    file.close();
}

void SongRepository::loadFromFile()
{
    songs.clear();

    std::ifstream file("songs.txt");

    if (!file.is_open())
        return;

    int id;
    std::string name;
    int year;
    std::string genre;
    std::string filePath;
    int artistId;
    int albumId;
    std::string imagePath;

    while (file >> id)
    {
        file.ignore();

        getline(file, name);

        file >> year;
        file.ignore();

        getline(file, genre);

        getline(file, filePath);

        file >> artistId;
        file.ignore();

        file >> albumId;
        file.ignore();

        getline(file, imagePath);

        Song song;

        song.setId(id);
        song.setName(name);
        song.setReleaseYear(year);
        song.setGenre(genre);
        song.setFilePath(filePath);
        song.setArtistId(artistId);
        song.setAlbumId(albumId);
        song.setImagePath(imagePath);

        songs.push_back(song);
    }

    file.close();
}
vector<Song> SongRepository::getAllSongs(){
    return songs;
}