#ifndef ALBUM_H
#define ALBUM_H

#include <string>

class Album
{
private:
    int albumId;
    std::string name;
    int artistId;
    std::string coverImage;
    int year;

public:
    Album();
    Album(int albumId,
          const std::string& name,
          int artistId,int year,
          const std::string& coverImage = "");


    int getAlbumId() const;
    std::string getName() const;
    int getArtistId() const;
    std::string getCoverImage() const;
    int getYear() const;


    void setName(const std::string& name);
    void setYear(int year);
    void setID(int id);
    void setCoverImage(const std::string& coverImage);
    void setArtistId(int id);
};

#endif