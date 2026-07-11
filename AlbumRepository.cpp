#include "AlbumRepository.h"

using namespace std;

AlbumRepository::AlbumRepository()
{
}

int AlbumRepository::save(const Album& album)
{
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