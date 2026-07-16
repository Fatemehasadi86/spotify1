#ifndef LISTENER_H
#define LISTENER_H

#include <string>
#include "Account.h"
#include <vector>


class Listener : public Account
{
private:
    std::string biography;
    std::vector<int> likedSongs;
public:
    Listener();

    Listener(int id,std::string fullName,std::string userName,
             std::string password,std:: string biography);

    void addLikedSong(int songId);

    void removeLikedSong(int songId);

    const std::vector<int>& getLikedSongs() const;
};

#endif // LISTENER_H