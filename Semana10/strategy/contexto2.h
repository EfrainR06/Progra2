//Efrain Retana Segura UNA

#ifndef CONTEXTO2_H
#define CONTEXTO2_H

#include "estrategia2.h"



class contexto2 {
public:

    enum tipoEstrategia {
        INDETERMINADO,
        IZQUIERDA,
        DERECHA,
        CENTRO
    };

    contexto2();

    virtual void establecerEstrategia(int, int);
    virtual void ejecutar(std::string);

private:
    estrategia2* _estrategia;
};


#endif //CONTEXTO2_H
