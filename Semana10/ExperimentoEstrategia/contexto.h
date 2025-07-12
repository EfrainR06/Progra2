//Efrain Retana Segura UNA

#ifndef CONTEXTO_H
#define CONTEXTO_H

#include "baseObject4.h"
#include "estrategia.h"

class contexto : public base::baseObject4Adapter {
public:
    contexto();
    virtual void m();

    virtual void establecerEstrategia(estrategia* e);
private:
    estrategia* _e;
};



#endif //CONTEXTO_H
