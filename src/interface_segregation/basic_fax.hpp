#ifndef BASIC_FAX_H
#define BASIC_FAX_H

class BasicFax
{
public:
    BasicFax() = default;
    virtual ~BasicFax() = default;

    virtual void fax() = 0;
};

#endif