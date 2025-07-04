//Efrain Retana Segura UNA

#ifndef PERSONA_H
#define PERSONA_H

#include "baseObject1.h"

using std::string;

class persona : public base::baseObject1{
public:
    persona(string, string);
    virtual ~persona();
    persona(const persona&);
    persona& operator=(const persona&);

    virtual string toString() const override;
    virtual bool esEmpleado() const;

protected:
    string _apellidos;
    string _nombres;
};



#endif //PERSONA_H
