//Efrain Retana Segura UNA
#ifndef B1_H
#define B1_H

#include "baseObject.h"
#include <iostream>

class b1 : public base::baseObject {
public:
    b1(std::string);
    virtual ~b1();

    virtual std::string toString() const override;

private:
    std::string _e;
};


#endif //B1_H
