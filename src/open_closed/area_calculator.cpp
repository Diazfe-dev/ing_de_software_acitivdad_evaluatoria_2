#ifndef AREA_CALCULATOR_CPP
#define AREA_CALCULATOR_CPP

#include "area_calculator.hpp"

class AreaCalculatorImpl : public AreaCalculator
{

public:
    AreaCalculatorImpl() {};
    ~AreaCalculatorImpl() {};

    double calculateArea(Shape *shape)
    {
        return shape->area();
    }
};

#endif