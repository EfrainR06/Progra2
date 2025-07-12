//Efrain Retana Segura UNA
#ifndef ESTRATEGIA2_H
#define ESTRATEGIA2_H

#include <iostream>

class estrategia2 {
public:
    estrategia2(int);

    virtual std::string darFormato(std::string);
    virtual std::string justificar(std::string linea) = 0;

protected:
    int _ancho;
};

class estrategia2Izquierda : public estrategia2 {
public:
    estrategia2Izquierda(int);

    virtual std::string justificar(std::string linea) override;
};

class estrategia2Derecha : public estrategia2 {
public:
    estrategia2Derecha(int);

    virtual std::string justificar(std::string linea) override;
};

class estrategia2Centrar : public estrategia2 {
public:
    estrategia2Centrar(int);

    virtual std::string justificar(std::string linea) override;
};

#endif // ESTRATEGIA2_H