#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include <iostream>

class UserRepository
{
public:
    UserRepository() = default;
    virtual ~UserRepository() = default;

    virtual void saveUser(std::string name, std::string email) = 0;
    virtual std::string getUser(std::string email) = 0;
};

#endif