#pragma once

#include <string>

class Song{
private:
    int songId;
    std::string name;
    int releaseYear;
    std::string genre;
    std::string filePath;
    int artistId;
    int albumId;
    std::string imagePath;

public:

    Song();
    Song(int songId,const std::string name,int releaseYear,
         const std::string genre,const std::string filePath,
         int artistId,int albumId ,std::string imagePath1);


    int getId() const;
    std::string getName() const;
    int getReleaseYear() const;
    std::string getGenre() const;
    std::string getFilePath() const;
    int getArtistId() const;
    int getAlbumId() const;
    std::string getImagePath() const;


    void setName(const std::string name);
    void setGenre(const std::string genre);
    void setImagePath(const std::string imagePath);
    void setReleaseYear(int year);
    void setFilePath(const std::string& path);
    void setArtistId(int id);
    void setAlbumId(int id);
    void setId(int id);


};
