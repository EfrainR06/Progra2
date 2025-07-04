//Efrain Retana Segura UNA

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "persona.h"


class empleado : public persona {
public:
    empleado(string,string, double);
    virtual ~empleado();

    virtual string toString() const override;
    virtual bool esEmpleado() const override;

private:
    double _salario;
};



#endif //EMPLEADO_H
