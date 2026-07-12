#ifndef ALBUMREPOSITORY_H
#define ALBUMREPOSITORY_H

#include "AbstractRepository.h"
#include "Album.h"

#include <vector>
#include <optional>

class AlbumRepository : public AbstractRepository<Album>
{
private:
    std::vector<Album> albumsList;

public:
    AlbumRepository();


    int save(const Album& album) override;
    bool remove(int id) override;
    std::optional<Album> search(int id) override;


    std::vector<Album> albums(int artistId);
    std::vector<Album> getAllAlbum();
    void loadFromFile();
};

#endif