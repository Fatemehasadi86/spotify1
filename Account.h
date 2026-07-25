#pragma once
#include <string>

class Account {
private:
    int id;
    std::string fullName;
    std::string username;
    std::string password;
    std::string biography;
    std::string role;
    std::string profileImage;

public:
    Account();
    Account(int id, std::string fullName, std::string username,
            std::string password);

    int getId() const;
    std::string getFullName() const;
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getBiography() const;
    std::string getRole() const;

    void setId(int newId);
    void setFullName(const std::string name);
    void setUsername(const std::string uname);
    void setPassword(const std::string pass);
    void setBiography(const std::string bio);
    void setRole(const std::string newRole);
    std::string getProfileImage();
    void setProfileImage(const std::string &image);

};
