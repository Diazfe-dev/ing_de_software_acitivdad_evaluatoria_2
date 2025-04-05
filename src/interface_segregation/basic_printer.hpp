#ifndef BASIC_PRINTER_H
#define BASIC_PRINTER_H

class BasicPrinter
{
public:
    BasicPrinter() = default;
    virtual ~BasicPrinter() = default;

    virtual void print() = 0;
};

#endif