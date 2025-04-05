#ifndef REPORT_H
#define REPORT_H

#include <iostream>

class Report
{

public:
    Report() = default;
    Report(std::string title, std::string content);
    ~Report() = default;

    virtual std::string getTitle() = 0;
    virtual std::string getContent() = 0;
};

#endif