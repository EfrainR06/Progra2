//Efrain Retana Segura UNA
#ifndef D_H
#define D_H

#include "b2.h"

class d : public b2 {
public:
    d(b2&);

    virtual void m1();

    virtual void m3() = 0;

protected:
    b2&  _b;
};



#endif //D_H
