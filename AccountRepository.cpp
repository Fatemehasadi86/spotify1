#include "AccountRepository.h"

#include <fstream>
#include <string>

AccountRepository::AccountRepository(){

}

int AccountRepository::generateNewId()
{
    std::ifstream file("accounts.txt");

    if (!file.is_open())
        return 1;

    int maxId = 0;

    int id;
    std::string fullName;
    std::string username;
    std::string password;
    std::string role;

    while (file >> id)
    {
        file.ignore();

        getline(file, fullName);
        getline(file, username);
        getline(file, password);
        getline(file, role);

        if (id > maxId)
            maxId = id;
    }

    file.close();

    return maxId + 1;
}