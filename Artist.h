#ifndef ARTIST_H
#define ARTIST_H

#include "Account.h"
#include <string>

using namespace std;

class Artist : public Account
{
private:
    string biography;

public:
    Artist();

    Artist(int id,
           string fullName,
           string userName,
           string password,
           string biography);

    void setBiography(string biography);
    string getBiography() const;
    void getUsernam();
};

#endif // ARTIST_H