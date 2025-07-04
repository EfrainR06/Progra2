//Efrain Retana Segura UNA

#ifndef B_H
#define B_H
#include "ib.h"

class b2 : public ib {
public:
    virtual void m1() override;
    virtual void m1(int);
};

class b3 : public ib {
public:
    virtual void m1() override;
    virtual void m2();
};


#endif //B_H
