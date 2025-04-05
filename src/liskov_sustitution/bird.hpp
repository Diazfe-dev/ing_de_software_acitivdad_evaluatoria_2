#ifndef BIRD_H
#define BIRD_H

class Bird
{
public:
    Bird() = default;
    virtual ~Bird() = default;
    virtual void layEggs() = 0;
};

#endif