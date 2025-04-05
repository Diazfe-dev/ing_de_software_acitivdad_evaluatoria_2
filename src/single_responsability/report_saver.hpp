#ifndef REPORT_SAVER_H
#define REPORT_SAVER_H

#include <iostream>

#include "report.hpp"

class ReportSaver
{

public:
    ReportSaver() = default;
    ~ReportSaver() = default;

    virtual void saveToFile(Report *report, std::string fileName) = 0;
};

#endif