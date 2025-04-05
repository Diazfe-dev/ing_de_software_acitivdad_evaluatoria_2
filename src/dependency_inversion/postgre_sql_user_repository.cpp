#ifndef POSTGRE_SQL_USER_REPOSITORY_CPP
#define POSTGRE_SQL_USER_REPOSITORY_CPP

#include <iostream>
#include "user_repository.hpp"

class PostgreSQLUserRepository : public UserRepository
{

public:
    PostgreSQLUserRepository() = default;
    ~PostgreSQLUserRepository() = default;

    void saveUser(std::string name, std::string email) override
    {
        std::cout << "Guardando en PostgresSQLUserRepository" << std::endl;
        std::cout << "Guardando usuario: " << name << " con email: " << email << std::endl;
    }

    std::string getUser(std::string email) override
    {
        std::cout << "Obteniendo en PostgresSQLUserRepository" << std::endl;
        std::cout << "Obteniendo usuario con email: " << email << std::endl;
        return "Usuario con email: " + email;
    }
};

#endif