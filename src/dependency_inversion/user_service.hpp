#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include <iostream>
#include "user_repository.hpp"

class UserService
{
private:
    UserRepository *userRepository;

public:
    UserService() = default;
    UserService(UserRepository *userRepository) : userRepository(userRepository) {};
    ~UserService() = default;

    virtual void saveUser(std::string name, std::string email) = 0;
    virtual std::string getUser(std::string email) = 0;
};

#endif