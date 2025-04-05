#ifndef AREA_CALCULATOR_H
#define AREA_CALCULATOR_H

#include "shape.hpp"

class AreaCalculator
{

public:
    AreaCalculator() = default;
    ~AreaCalculator() = default;

    virtual double calculateArea(Shape *shape) = 0;
};

#endif