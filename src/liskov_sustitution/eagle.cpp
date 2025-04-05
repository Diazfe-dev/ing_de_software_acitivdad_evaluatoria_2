#ifndef EAGLE_CPP
#define EAGLE_CPP

#include "flying_bird.hpp"

class Eagle : public FlyingBird
{

public:
    Eagle() = default;
    ~Eagle() = default;

    void layEggs()
    {
        std::cout << "El aguila pone huevos!" << std::endl;
    }

    void fly()
    {
        std::cout << "El aguila puede volar!" << std::endl;
    }
};

#endif