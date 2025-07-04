//Efrain Retana Segura UNA


#include <iostream>
#include <sstream>
#include "persona.h"

persona::persona(string apellidos, string nombre)
: _apellidos(apellidos), _nombres(nombre) {
    std::cout << "persona(" << *this << ")" << std::endl;
}

persona::~persona() {
    std::cout << "~persona(" << *this << ")" << std::endl;
}

persona::persona(const persona& p)
: _apellidos(p._apellidos), _nombres(p._nombres) {
    std::cout << "(constructor de copia)" << std::endl;
}

persona& persona::operator=(const persona& p) {
    if (&p != this) {
        std::cout << "(operador =)" << std::endl;
        _apellidos = p._apellidos;
        _nombres = p._nombres;
    }
    return *this;
}

string persona::toString() const {
    std::stringstream ss;
    ss << "{";
    ss << "'apellidos': '" << _apellidos << "', ";
    ss << "'nombre': '" << _nombres << "'";
    ss << "}";
    return ss.str();
}

bool persona::esEmpleado() const {
    return false;
}
