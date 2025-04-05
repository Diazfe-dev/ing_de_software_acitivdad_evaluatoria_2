#ifndef FAX_PRINTER_CPP
#define FAX_PRINTER_CPP

#include <iostream>
#include "basic_printer.hpp"
#include "basic_fax.hpp"

class FaxPrinterImpl : public BasicPrinter, public BasicFax
{

public:
    FaxPrinterImpl() = default;
    ~FaxPrinterImpl() = default;

    void print() override
    {
        std::cout << "Print" << std::endl;
    }

    void fax() override
    {
        std::cout << "Fax" << std::endl;
    }
};

#endif