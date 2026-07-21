#include "SongRepository.h"
#include <fstream>
#include <algorithm>
#include "PlaylistRepository.h"

using namespace std;

SongRepository::SongRepository()
{
    loadFromFile();
}


void SongRepository::saveLikedSongs(vector<LikedSongs> likedSongsList)
{
    ofstream file("likedSongs.txt");

    if (!file.is_open())
        return;

    for (int i = 0; i < likedSongsList.size(); i++)
    {
        file << likedSongsList[i].listenerId << endl;
        file << likedSongsList[i].songs.size() << endl;

        for (int j = 0; j < likedSongsList[i].songs.size(); j++)
        {
            file << likedSongsList[i].songs[j] << endl;
        }
    }

    file.close();
}

std::vector<LikedSongs> SongRepository:: loadLikedSongs()
{
    vector<LikedSongs> likedSongsList;

    ifstream file("likedSongs.txt");

    if (!file.is_open())
        return likedSongsList;

    int listenerId;
    int count;

    while (file >> listenerId)
    {
        file >> count;

        LikedSongs liked;
        liked.listenerId = listenerId;

        for (int i = 0; i < count; i++)
        {
            int songId;
            file >> songId;
            liked.songs.push_back(songId);
        }

        likedSongsList.push_back(liked);
    }

    file.close();

    return likedSongsList;
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

            saveToFile();

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

    std::sort(result.begin(), result.end(),
              [](const Song &a, const Song &b)
              {
                  return a.getName() < b.getName();
              });

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

    std::sort(result.begin(), result.end(),[](const Song &a, const Song &b){
                  return a.getName() < b.getName();
              });

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

    std::sort(result.begin(), result.end(),[](const Song &a, const Song &b){
                  return a.getName() < b.getName();
              });

    return result;
}


vector<Song> SongRepository::getByPlaylist(int playlistId)
{
    PlaylistRepository playlistRepository;

    playlistRepository.loadFromFile();

    vector<Song> result;

    std::optional<Playlist> playlist = playlistRepository.search(playlistId);

    if (!playlist.has_value())
    {
        return result;
    }

    return playlist->getSongs();
}


vector<Song> SongRepository::getByLikedSongs(int listenerId)
{

    vector<Song> result;

    vector<LikedSongs> likedSongsList = loadLikedSongs();

    for (int i = 0; i < likedSongsList.size(); i++)
    {
        if (likedSongsList[i].listenerId == listenerId)
        {
            for (int j = 0; j < likedSongsList[i].songs.size(); j++)
            {
                optional<Song> song = search(likedSongsList[i].songs[j]);

                if (song.has_value())
                {
                    result.push_back(song.value());
                }
            }

            break;
        }
    }

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
void SongRepository::likeSong(int listenerId, int songId){


    vector<LikedSongs> likedSongsList = loadLikedSongs();

    for (int i = 0; i < likedSongsList.size(); i++)
    {
        if (likedSongsList[i].listenerId == listenerId)
        {
            for (int j = 0; j < likedSongsList[i].songs.size(); j++)
            {
                if (likedSongsList[i].songs[j] == songId)
                    return;
            }

            likedSongsList[i].songs.push_back(songId);

            saveLikedSongs(likedSongsList);

            return;
        }
    }

    LikedSongs liked;

    liked.listenerId = listenerId;
    liked.songs.push_back(songId);

    likedSongsList.push_back(liked);

    saveLikedSongs(likedSongsList);

}



void SongRepository::unlikeSong(int listenerId, int songId)
{
    vector<LikedSongs> likedSongsList = loadLikedSongs();

    for (int i = 0; i < likedSongsList.size(); i++)
    {
        if (likedSongsList[i].listenerId == listenerId)
        {
            for (int j = 0; j < likedSongsList[i].songs.size(); j++)
            {
                if (likedSongsList[i].songs[j] == songId)
                {
                    likedSongsList[i].songs.erase(
                        likedSongsList[i].songs.begin() + j);

                    saveLikedSongs(likedSongsList);

                    return;
                }
            }
        }
    }
}



bool SongRepository::isLiked(int listenerId, int songId)
{
    vector<LikedSongs> likedSongsList = loadLikedSongs();

    for (int i = 0; i < likedSongsList.size(); i++)
    {
        if (likedSongsList[i].listenerId == listenerId)
        {
            for (int j = 0; j < likedSongsList[i].songs.size(); j++)
            {
                if (likedSongsList[i].songs[j] == songId)
                {
                    return true;
                }
            }
        }
    }

    return false;
}