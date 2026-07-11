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

public:
    Album();
    Album(int albumId,
          const std::string& name,
          int artistId,
          const std::string& coverImage = "");


    int getAlbumId() const;
    std::string getName() const;
    int getArtistId() const;
    std::string getCoverImage() const;


    void setName(const std::string& name);
    void setCoverImage(const std::string& coverImage);
};

#endif