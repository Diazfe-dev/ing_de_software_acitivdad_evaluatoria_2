#ifndef BASIC_PRINTER_CPP
#define BASIC_PRINTER_CPP

#include <iostream>
#include "basic_printer.hpp"

class BasicPrinterImpl : public BasicPrinter
{

public:
    BasicPrinterImpl() = default;
    ~BasicPrinterImpl() = default;

    void print()
    {
        std::cout << "Print" << std::endl;
    }
};

#endif