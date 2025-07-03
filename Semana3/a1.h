//Efrain Retana Segura UNA
#ifndef A1_H
#define A1_H

#include "baseObject.h"
#include "b1.h"

#define MAX_B 6

class a1 : public base::baseObject {
public:
    a1(std::string, int = MAX_B);
    a1(const a1&);
    a1& operator=(const a1&);
    virtual ~a1();

    std::string toString() const override;

    virtual a1& agregar(b1*);
    virtual void agregarTodos(const a1&);
    virtual b1* eliminar();
    virtual void eliminarTodos(bool = false);

    virtual int maxB() const;
    virtual int kB() const;

private:
    std::string _e;
    b1** _b1;
    int _n;
    int _k;
};



#endif //A1_H
