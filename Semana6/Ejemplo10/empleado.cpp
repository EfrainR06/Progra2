//Efrain Retana Segura UNA

#include <iostream>
#include <sstream>
#include "empleado.h"

empleado::empleado(string apellidos, string nombre, double salario)
: persona(apellidos, nombre), _salario(salario) {
}

empleado::~empleado() {
    std::cout << "~empleado()" << std::endl;
}

string empleado::toString() const {
    std::stringstream ss;
    ss << "{";
    ss << "'apellidos': '" << _apellidos << "', ";
    ss << "'nombre': '" << _nombres << "', ";
    ss << "'salario': '" << _salario << "'";
    ss << "}";
    return ss.str();
}

bool empleado::esEmpleado() const {
    return true;
}
