#ifndef CIRCLE_CPP
#define CIRCLE_CPP

#include "shape.hpp"

class Circle : public Shape
{

private:
    double radius;

public:
    Circle(double radius) : radius(radius) {};
    ~Circle() {};

    double area()
    {
        return 3.14 * radius * radius;
    }
};

#endif