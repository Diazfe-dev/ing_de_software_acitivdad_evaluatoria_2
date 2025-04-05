#ifndef REPORT_SAVER_CPP
#define REPORT_SAVER_CPP

#include <iostream>
#include <fstream>

#include "report_saver.hpp"

class ReportSaverImpl : public ReportSaver
{
    
public:
    ReportSaverImpl() {};
    ~ReportSaverImpl() {};

    void saveToFile(Report *report, std::string fileName)
    {
        std::ofstream file(fileName);
        file << report->getContent();
        file.close();
    };
};

#endif