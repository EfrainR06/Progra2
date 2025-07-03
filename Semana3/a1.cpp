// Efrain Retana Segura UNA
#include "a1.h"
#include <exception>
#include <iostream>
#include <sstream>

a1::a1(std::string e, int n) : _e(e), _n(n), _k(0) {
    std::cout << "a::a('" << _e << "', " << _n << ")" << std::endl;
    _b1 = new b1*[_n];
}

a1::a1(const a1& a1) : _e(a1._e + " (copia)"), _n(a1._n), _k(a1._k) {
    std::cout << "a::a('" << _e << "', " << _n << ")" << std::endl;
    _b1 = new b1*[_n];
    for (int _k = 0; _k < _n; _k++) {
        _b1[_k] = a1._b1[_k];
    }
}

a1& a1::operator=(const a1& a1) {
    if (this != &a1) {
        eliminarTodos();
        delete[] _b1;

        _e = a1._e + " (asignacion)";
        _n = a1._n;
        _k = a1._k;

        _b1 = new b1*[_n];
        for (int _k = 0; _k < _n; _k++) {
            _b1[_k] = a1._b1[_k];
        }
    }
    return *this;
}

a1::~a1() {
    eliminarTodos();
    delete[] _b1;

    std::cout << "a::~a('" << _e << "', " << _n << ")" << std::endl;
}

std::string a1::toString() const {
    std::stringstream ss;
    ss << "a:{";
    ss << "\n\te: '" << _e << "', ";
    ss << "\n\tb1: [";
    for (int i = 0; i < kB(); i++) {
        ss << "\n\t\t" << *_b1[i];
        if (i < (kB() - 1)) {
            ss << ", ";
        }
    }
    ss << "\n\t]";
    ss << "\n\tn: " << _n;
    ss << "\n\tk: " << _k;
    ss << "\n}";
    return ss.str();
}

a1& a1::agregar(b1* e) {
    if (_k < _n) {
        _b1[_k++] = e;
    } else {
        throw std::length_error("No hay espacio disponible en el arreglo.");
    }
    return *this;
}

void a1::agregarTodos(const a1& a1) {
    try {
        for (int i = 0; i < a1.kB(); i++) {
            agregar(a1._b1[i]);
        }
    } catch (const std::exception& ex) {
        throw ex;
    }
}

b1* a1::eliminar() {
    b1* r = nullptr;
    if (0 < _k) {
        r = _b1[--_k];
    } else {
        throw std::out_of_range("No existe ese elemento en el arreglo.");
    }
    return r;
}

void a1::eliminarTodos(bool purgar) {
    while (kB() > 0) {
        b1* tmp = eliminar();
        if (purgar) {
            delete tmp;
        }
    }
}

int a1::maxB() const {
    return _n;
}

int a1::kB() const {
    return _k;
}
