#ifndef USER_SERVICE_CPP
#define USER_SERVICE_CPP

#include <iostream>
#include "user_service.hpp"

class UserServiceImpl : public UserService
{

private:
    UserRepository *userRepository;

public:
    UserServiceImpl(UserRepository *userRepository)
    {
        this->userRepository = userRepository;
    };
    ~UserServiceImpl() = default;

    void saveUser(std::string name, std::string email) override
    {
        userRepository->saveUser(name, email);
    }

    std::string getUser(std::string email) override
    {
        return userRepository->getUser(email);
    }
};

#endif