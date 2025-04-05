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

#include "liskov_sustitution/bird.hpp"
#include "liskov_sustitution/flying_bird.hpp"
#include "liskov_sustitution/eagle.cpp"
#include "liskov_sustitution/ostrich.cpp"

#include "interface_segregation/basic_printer.hpp"
#include "interface_segregation/basic_scanner.hpp"
#include "interface_segregation/basic_fax.hpp"
#include "interface_segregation/basic_printer.cpp"
#include "interface_segregation/fax_printer.cpp"
#include "interface_segregation/multifunction_printer.cpp"

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

    std::cout << "\n";
    //================================================================================

    // LSP
    //================================================================================
    std::cout << "Principio de sustitucion de liskov.";
    std::cout << "\n";

    std::cout << "Avestruz" << std::endl;
    Bird *bird = new Ostrich();
    bird->layEggs();

    // Aca podemos reemplazar Flying bird por la interfaz base Bird.
    // Notemos que no podemos llamar al metodo fly. A pesar de ser tipo Eagle que hereda de flying bird.
    std::cout << "Halcon que no puede volar (esta herido)" << std::endl;
    Bird *noFlyingEagle = new Eagle();
    noFlyingEagle->layEggs();

    // Aca llamamos a la interfaz Flying bird.
    // Notemos que aca si podemos llamar al metodo fly.
    std::cout << "Halcon que puede volar (esta sano)" << std::endl;
    FlyingBird *flyingBird = new Eagle();
    flyingBird->layEggs();
    flyingBird->fly();

    std::cout << "\n";

    //================================================================================

    // LSP
    //================================================================================
    std::cout << "Principio de sustitucion de liskov.";
    std::cout << "\n";

    std::cout << "Impresora basica" << std::endl;
    std::cout << "\n";
    BasicPrinterImpl *basicPrinter = new BasicPrinterImpl();
    basicPrinter->print();
    std::cout << "\n";

    std::cout << "Impresora con fax" << std::endl;
    std::cout << "\n";
    FaxPrinterImpl *faxPrinter = new FaxPrinterImpl();
    faxPrinter->print();
    faxPrinter->fax();
    std::cout << "\n";

    std::cout << "Impresora multifuncion" << std::endl;
    std::cout << "\n";
    MultifunctionPrinterImpl *multifunctionPrinter = new MultifunctionPrinterImpl();
    multifunctionPrinter->print();
    multifunctionPrinter->Scan();
    multifunctionPrinter->fax();
    std::cout << "\n";
    //================================================================================

    return 0;
}

#endif