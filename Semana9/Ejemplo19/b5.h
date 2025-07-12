//Efrain Retana Segura UNA

#ifndef B5_H
#define B5_H

#include "baseObject3.h"

class b5 : public base::baseObject3Adapter {
public:
    b5(std::string);

    static b5* leer(std::istream&); // factory method
    virtual void escribir(std::ostream&) const;
    static void escribir(std::ostream&, const b5&);

    virtual std::string toString() const override;

    virtual std::string e() const;

protected:
    virtual void abrir(std::ostream&) const;
    virtual void cerrar(std::ostream&) const;
    virtual void guardarCampos(std::ostream&) const;

    std::string _e;
};

//----------------------------------------------------------------------------

class d1 : public b5 {
public:
    d1(std::string);

    virtual std::string toString() const override;
};

class d2:public b5 {
public:
    d2(std::string, int);
    virtual std::string toString() const override;
    virtual int m() const;
protected:
    virtual void guardarCampos(std::ostream&) const override;
private:
    int _m;
};


#endif //B5_H
