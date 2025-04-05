#ifndef MULTIFUNCTION_PRINTER_CPP
#define MULTIFUNCTION_PRINTER_CPP

#include <iostream>
#include "basic_printer.hpp"
#include "basic_scanner.hpp"
#include "basic_fax.hpp"

class MultifunctionPrinterImpl : public BasicPrinter, public BasicScanner, public BasicFax
{

public:
    MultifunctionPrinterImpl() = default;
    ~MultifunctionPrinterImpl() = default;

    void print() override
    {
        std::cout << "Print" << std::endl;
    }

    void Scan() override
    {
        std::cout << "Scan" << std::endl;
    }

    void fax() override
    {
        std::cout << "Fax" << std::endl;
    }
};

#endif