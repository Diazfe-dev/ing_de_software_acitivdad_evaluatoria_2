#ifndef OSTRICH_CPP
#define OSTRICH_CPP

#include <iostream>
#include "bird.hpp"

class Ostrich : public Bird
{

public:
    Ostrich() = default;
    ~Ostrich() = default;

    void layEggs()
    {
        std::cout << "La avestruz pone huevos!" << std::endl;
    }
};

#endif