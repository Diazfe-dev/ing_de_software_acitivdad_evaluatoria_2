#ifndef MAIN_CPP
#define MAIN_CPP


#include <iostream>

#include "single_responsability/report.hpp"
#include "single_responsability/printer.hpp"

#include "single_responsability/report.cpp"
#include "single_responsability/printer.cpp"

#include "single_responsability/report_saver.hpp"
#include "single_responsability/report_saver.cpp"

int main()
{
    Report *report = new ReportImpl("Reporte de prueba", "Este es un reporte de prueba");
    Printer *printer = new PrinterImpl();
    ReportSaver * saveToFile = new ReportSaverImpl();

    printer->print(report);
    saveToFile->saveToFile(report, "reporte.txt");

    return 0;
}

#endif