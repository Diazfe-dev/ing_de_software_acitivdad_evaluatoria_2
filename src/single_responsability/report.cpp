#ifndef REPORT_CPP
#define REPORT_CPP

#include "report.hpp"

class ReportImpl : public Report
{

protected:
    std::string title;
    std::string content;

public:
    ReportImpl(std::string title, std::string content) : title(title), content(content) {};

    ~ReportImpl() {};

    std::string getTitle() { return this->title; };

    std::string getContent() { return this->content; };
};

#endif