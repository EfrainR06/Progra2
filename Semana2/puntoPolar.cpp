//Efrain Retana Segura UNA

#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "punto.h"

puntoPolar::puntoPolar(double r, double a) : _r(r), _a(a) {
    // std::cout << "puntoPolar::puntoPolar()" << std::endl;
    normalize();
}

puntoPolar::~puntoPolar() {
    // std::cout << "puntoPolar::~puntoPolar()" << std::endl;
}

std::string puntoPolar::toString() const {
    std::stringstream ss;
    ss << std::setprecision(PRECISION_FMT) << std::fixed << std::showpos;
    ss << "(r: " << r() << ", a: " << a() << ")";
    return ss.str();
}

punto& puntoPolar::desplazar(double dx, double dy) {
    double x = this->x();
    double y = this->y();
    x += dx;
    y += dy;
    setX(x);
    setY(y);
    return *this;
}

punto& puntoPolar::rotar(double da) {
    setA(a() + da);
    return *this;
}

punto& puntoPolar::setX(double x) {
    double y = this->y();
    _r = sqrt(x * x + y * y);
    _a = atan2(y, x);
    return *this;
}

punto& puntoPolar::setY(double y) {
    double x = this->x();
    _r = sqrt(x * x + y * y);
    _a = atan2(y, x);
    return *this;
}

punto& puntoPolar::setR(double r) {
    _r = r;
    return *this;
}

punto& puntoPolar::setA(double a) {
    _a = a;
    normalize();
    return *this;
}

double puntoPolar::x() const {
    return cos(a()) * r();
}

double puntoPolar::y() const {
    return sin(a()) * r();
}

double puntoPolar::r() const {
    return _r;
}

double puntoPolar::a() const {
    return _a;
}

void puntoPolar::normalize() {

    // Garantiza que el valor del ángulo se encuentre en
    // el rango [-3.15159..3.14159].
    // Este método debe usarse cada vez que cambie el valor
    // del atributo correspondiente al ángulo del punto,
    // en el constructor y en el mutador.
    // El método NO se declara virtual para poder utilizarlo
    // en el constructor de la clase.

    while (_a < -M_PI) {
        _a += 2.0 * M_PI;
    }
    while (M_PI < _a) {
        _a -= 2.0 * M_PI;
    }
}
