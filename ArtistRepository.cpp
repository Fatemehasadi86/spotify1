#include "ArtistRepository.h"

using namespace std;

ArtistRepository::ArtistRepository()
{
}

int ArtistRepository::save(const Account& account)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == account.getId())
        {
            artists[i] = account;
            return account.getId();
        }
    }

    artists.push_back(account);
    return account.getId();
}

bool ArtistRepository::remove(int id)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == id)
        {
            artists.erase(artists.begin() + i);
            return true;
        }
    }

    return false;
}

std::optional<Account> ArtistRepository::search(int id)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getId() == id)
        {
            return artists[i];
        }
    }

    return std::nullopt;
}

std::optional<Account> ArtistRepository::searchByUserName(const std::string& userName)
{
    for (int i = 0; i < artists.size(); i++)
    {
        if (artists[i].getUsername() == userName)
        {
            return artists[i];
        }
    }

    return std::nullopt;
}