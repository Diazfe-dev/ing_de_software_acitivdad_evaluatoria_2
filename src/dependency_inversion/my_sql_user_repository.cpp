#ifndef MYSQL_USER_REPOSITORY_CPP
#define MYSQL_USER_REPOSITORY_CPP

#include <iostream>
#include "user_repository.hpp"

class MysqlUserRepository : public UserRepository
{

public:
    MysqlUserRepository() = default;
    ~MysqlUserRepository() = default;

    void saveUser(std::string name, std::string email) override
    {
        std::cout << "Guardando en MysqlUserRepository" << std::endl;
        std::cout << "Guardando usuario: " << name << " con email: " << email << std::endl;
    }

    std::string getUser(std::string email) override
    {
        std::cout << "Obteniendo en MysqlUserRepository" << std::endl;
        std::cout << "Obteniendo usuario con email: " << email << std::endl;
        return "Usuario con email: " + email;
    }
};

#endif