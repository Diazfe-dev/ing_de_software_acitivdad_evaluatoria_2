#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>

#include "single_responsability/report.hpp"
#include "single_responsability/printer.hpp"
#include "single_responsability/report.cpp"
#include "single_responsability/printer.cpp"
#include "single_responsability/report_saver.hpp"
#include "single_responsability/report_saver.cpp"

#include "open_closed/shape.hpp"
#include "open_closed/circle.cpp"
#include "open_closed/triangle.cpp"
#include "open_closed/area_calculator.hpp"
#include "open_closed/area_calculator.cpp"

int main()
{
    // SRP
    //================================================================================
    std::cout << "Principio de responsabilidad unica.";
    std::cout << "\n";
    Report *report = new ReportImpl("Reporte de prueba", "Este es un reporte de prueba");
    Printer *printer = new PrinterImpl();
    ReportSaver *saveToFile = new ReportSaverImpl();

    printer->print(report);
    saveToFile->saveToFile(report, "reporte.txt");
    std::cout << "\n";
    //================================================================================

    // OCP
    //================================================================================
    std::cout << "Principio de abierto-cerrado.";
    std::cout << "\n";
    AreaCalculator *areaCalculator = new AreaCalculatorImpl();
    Shape *triangle = new Triangle(10, 20);
    std::cout << "El area del triangulo es:" << areaCalculator->calculateArea(triangle) << std::endl;

    Shape *circle = new Circle(5);
    std::cout << "El area del circulo es:" << areaCalculator->calculateArea(circle) << std::endl;
    //================================================================================
    return 0;
}

#endif