#include "Song.h"


Song::Song(int songId,const std::string name,
           int releaseYear,const std::string genre,
           const std::string filePath,int artistId,
           int albumId=0,std::string imagePath="")
{
    this->songId = songId;
    this->name = name;
    this->releaseYear = releaseYear;
    this->genre = genre;
    this->filePath = filePath;
    this->artistId = artistId;
    this->albumId = albumId;
    this->imagePath = imagePath;
}

Song::Song()
{
    songId = 0;
    name = "";
    releaseYear = 0;
    genre = "";
    filePath = "";
    artistId = 0;
    albumId = 0;
    imagePath = "";
}

void Song::setReleaseYear(int year)
{
    releaseYear = year;
}

void Song::setFilePath(const std::string& path)
{
    filePath = path;
}

void Song::setArtistId(int id)
{
    artistId = id;
}

void Song::setAlbumId(int id)
{
    albumId = id;
}

void Song::setId(int id)
{
    songId = id;
}


int Song::getId() const
{
    return songId;
}


std::string Song::getName() const
{
    return name;
}


int Song::getReleaseYear() const
{
    return releaseYear;
}


std::string Song::getGenre() const
{
    return genre;
}


std::string Song::getFilePath() const
{
    return filePath;
}


int Song::getArtistId() const
{
    return artistId;
}


int Song::getAlbumId() const
{
    return albumId;
}


std::string Song::getImagePath() const
{
    return imagePath;
}


void Song::setName(const std::string name)
{
    this->name = name;
}


void Song::setGenre(const std::string genre)
{
    this->genre = genre;
}


void Song::setImagePath(const std::string imagePath)
{
    this->imagePath = imagePath;
}