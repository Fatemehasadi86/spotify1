#include "Listener.h"

Listener::Listener()
{
}

Listener::Listener(int id,std::string fullName,std::string userName,
                   std::string password,std:: string biography1)
    : Account(id, fullName, userName, password)
{
    this->biography=biography1;
}