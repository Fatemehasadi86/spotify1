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
                   const std::string& name,
                   int artistId,int year,
                   const std::string& coverImage)
{
    this->albumId = albumId;
    this->name = name;
    this->artistId = artistId;
    this->coverImage = coverImage;
    this->year=year;
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

void Album::setYear(int year){
    this->year=year;
}
void Album::setID(int id){
    this->albumId=id;
}

int Album::getYear() const
{
    return year;
}

void Album::setArtistId(int id){
    this->artistId=id;
}