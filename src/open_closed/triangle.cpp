#ifndef TRIANGLE_CPP
#define TRIANGLE_CPP

#include "shape.hpp"

class Triangle : public Shape
{

private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {};
    ~Triangle() {};
    
    double area()
    {
        return (base * height) / 2;
    }

};

#endif