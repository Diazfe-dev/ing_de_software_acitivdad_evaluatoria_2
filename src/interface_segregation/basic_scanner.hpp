#ifndef BASIC_SCANNER_H
#define BASIC_SCANNER_H

class BasicScanner
{
public:
    BasicScanner() = default;
    virtual ~BasicScanner() = default;

    virtual void Scan() = 0;
};

#endif