#ifndef FLYING_BIRD_H
#define FLYING_BIRD_H

#include <iostream>

#include "bird.hpp"

class FlyingBird : public Bird
{
public:
    FlyingBird() = default;
    ~FlyingBird() = default;

    virtual void fly() = 0;
};

#endif