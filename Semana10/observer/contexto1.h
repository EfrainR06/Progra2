//Efrain Retana Segura UNA
#ifndef CONTEXTO1_H
#define CONTEXTO1_H

#include "baseObject5.h"
#include "estrategia1.h"

class contexto1 : public base::baseObject5Adapter {
public:
    contexto1();
    virtual void m();

    virtual void establecerEstrategia(estrategia1*);

private:
    estrategia1* _e;
};

#endif // CONTEXTO1_H