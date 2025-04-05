#ifndef PRINTER_H
#define PRINTER_H

#include "report.hpp"

class Printer
{

public:
    Printer() = default;
    ~Printer() = default;

    virtual void print(Report *report) = 0;

};

#endif