#ifndef PRINTER_CPP
#define PRINTER_CPP

#include "report.hpp"
#include "printer.hpp"

#include <fstream>

class PrinterImpl : public Printer
{

public:
    PrinterImpl(){};
    ~PrinterImpl(){};

    void print(Report *report)
    {
        std::cout << "=== " << report->getTitle() << " ===\n"
                  << report->getContent() << std::endl;
    }

    void saveToFile(Report *report, std::string fileName)
    {
        std::ofstream file(fileName);
        file << report->getContent();
        file.close();
    };
};

#endif