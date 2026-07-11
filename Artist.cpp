#include "Artist.h"

Artist::Artist()
{
}

Artist::Artist(int id,
               string fullName,
               string userName,
               string password,
               string biography1)
    : Account(id, fullName, userName, password)
{
    this->biography = biography1;
}


string Artist::getBiography() const
{
    return biography;
}

void Artist::setBiography(string biography){
    this->biography=biography;
}