#ifndef LISTENER_H
#define LISTENER_H

#include <string>
#include "Account.h"


class Listener : public Account
{
private:
    std::string biography;
public:
    Listener();

    Listener(int id,std::string fullName,std::string userName,
             std::string password,std:: string biography);
};

#endif // LISTENER_H