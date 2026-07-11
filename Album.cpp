#include "Album.h"

using namespace std;

Album::Album()
{
    albumId = 0;
    name = "";
    artistId = 0;
    coverImage = "";
}

Album::Album(int albumId,
             const string& name,
             int artistId,
             const string& coverImage)
{
    this->albumId = albumId;
    this->name = name;
    this->artistId = artistId;
    this->coverImage = coverImage;
}

int Album::getAlbumId() const
{
    return albumId;
}

string Album::getName() const
{
    return name;
}

int Album::getArtistId() const
{
    return artistId;
}

string Album::getCoverImage() const
{
    return coverImage;
}

void Album::setName(const string& name)
{
    this->name = name;
}

void Album::setCoverImage(const string& coverImage)
{
    this->coverImage = coverImage;
}