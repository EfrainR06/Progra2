//Efrain Retana Segura UNA

#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H

#include "lista.h"
#include "persona.h"

class listaPersonas : public base::lista<persona> {
public:
    listaPersonas();

    virtual int numPersonas() const;
    virtual listaPersonas& agregar(const persona&);
    virtual void eliminarTodos() override;
    virtual std::shared_ptr<listaPersonas> obtenerListaEmpleados() const;

    virtual std::string toString() const override;

private:
    int _n;
};



#endif //LISTAPERSONAS_H
