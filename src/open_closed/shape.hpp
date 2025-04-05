#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    Shape() = default;
    virtual ~Shape() = default;
    
    virtual double area() = 0;
};

#endif