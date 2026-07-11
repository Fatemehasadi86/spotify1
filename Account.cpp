#include "Account.h"


using namespace std;

Account::Account() {
}


Account::Account(int id1, string fullName1, string username1,
                 string password1){
    id=id1;
    fullName=fullName1;
    username=username1;
    password=password1;
}


int Account::getId() const {
    return id;
}

string Account::getFullName() const {
    return fullName;
}

string Account::getUsername() const {
    return username;
}

string Account::getPassword() const {
    return password;
}

string Account::getBiography() const {
    return biography;
}

string Account::getRole() const {
    return role;
}


void Account::setId(int newId) {
    id = newId;
}

void Account::setFullName(const string name) {
    fullName = name;
}

void Account::setUsername(const string uname) {
    username = uname;
}

void Account::setPassword(const string pass) {
    password = pass;
}

void Account::setBiography(const string bio) {
    biography = bio;
}

void Account::setRole(const string newRole) {
    role = newRole;
}