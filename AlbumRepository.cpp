#include "AlbumRepository.h"
#include "Album.h"
#include <fstream>

using namespace std;

AlbumRepository::AlbumRepository()
{
}

int AlbumRepository::save(const Album& album)
{
    std::ofstream file("albums.txt", std::ios::app);

    file << album.getAlbumId() << std::endl;
    file << album.getName() << std::endl;
    file << album.getYear() << std::endl;

    file.close();

    for (int i = 0; i < albumsList.size(); i++)
    {
        if (albumsList[i].getAlbumId() == album.getAlbumId())
        {
            albumsList[i] = album;
            return album.getAlbumId();
        }
    }

    albumsList.push_back(album);
    return album.getAlbumId();
}

bool AlbumRepository::remove(int id)
{
    for (int i = 0; i < albumsList.size(); i++)
    {
        if (albumsList[i].getAlbumId() == id)
        {
            albumsList.erase(albumsList.begin() + i);
            return true;
        }
    }

    return false;
}

std::optional<Album> AlbumRepository::search(int id)
{
    for (int i = 0; i < albumsList.size(); i++)
    {
        if (albumsList[i].getAlbumId() == id)
        {
            return albumsList[i];
        }
    }

    return std::nullopt;
}

vector<Album> AlbumRepository::albums(int artistId)
{
    vector<Album> result;

    for (int i = 0; i < albumsList.size(); i++)
    {
        if (albumsList[i].getArtistId() == artistId)
        {
            result.push_back(albumsList[i]);
        }
    }

    return result;
}
vector<Album> AlbumRepository::getAllAlbum(){
    return albumsList;
}

void AlbumRepository::loadFromFile(){

    albumsList.clear();

    std::ifstream file("albums.txt");

    if (!file.is_open())
        return;

    int id;
    std::string title;
    int year;

    while (file >> id)
    {
        file.ignore();

        getline(file, title);

        file >> year;
        file.ignore();

        Album album;

        album.setID(id);
        album.setName(title);
        album.setYear(year);

        albumsList.push_back(album);
    }

    file.close();

}