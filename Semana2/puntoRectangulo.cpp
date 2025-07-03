// Efrain Retana Segura

#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "punto.h"

puntoRectangular::puntoRectangular(double x, double y) : _x(x), _y(y) {
    // std::cout << "puntoRectangular::puntoRectangular()" << std::endl;
}

puntoRectangular::~puntoRectangular() {
    // std::cout << "puntoRectangular::~puntoRectangular()" << std::endl;
}

std::string puntoRectangular::toString() const {
    std::stringstream ss;
    ss << std::setprecision(PRECISION_FMT) << std::fixed << std::showpos;
    ss << "(x: " << x() << ", y: " << y() << ")";
    return ss.str();
}

punto& puntoRectangular::desplazar(double dx, double dy) {
    _x += dx;
    _y += dy;
    return *this;
}

punto& puntoRectangular::rotar(double da) {
    setA(a() + da);
    return *this;
}

punto& puntoRectangular::setX(double x) {
    _x = x;
    return *this;
}

punto& puntoRectangular::setY(double y) {
    _y = y;
    return *this;
}

punto& puntoRectangular::setA(double a) {
    double r = this->r();
    _x = cos(a) * r;
    _y = sin(a) * r;
    return *this;
}

punto& puntoRectangular::setR(double r) {
    double a = this->a();
    _x = cos(a) * r;
    _y = sin(a) * r;
    return *this;
}

double puntoRectangular::x() const {
    return _x;
}

double puntoRectangular::y() const {
    return _y;
}

double puntoRectangular::r() const {
    return sqrt(x() * x() + y() * y());
}

double puntoRectangular::a() const {
    return atan2(y(), x());
}
