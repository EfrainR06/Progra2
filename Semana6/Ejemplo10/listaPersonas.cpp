//Efrain Retana Segura UNA
#include "listaPersonas.h"

using namespace base;

listaPersonas::listaPersonas() : _n(0) {
}

int listaPersonas::numPersonas() const {
    return _n;
}

listaPersonas& listaPersonas::agregar(const persona& info) {
    _n++;
    base::lista<persona>::agregar(info);
    return *this;
}

void listaPersonas::eliminarTodos() {
    base::lista<persona>::eliminarTodos();
    _n = 0;
}

std::shared_ptr<listaPersonas> listaPersonas::obtenerListaEmpleados() const {
    std::shared_ptr<listaPersonas> r = std::make_shared<listaPersonas>();
    for (auto p : * this) {
        if (p.esEmpleado()) {
            r->agregar(p);
            r->_n++;
        }
    }
    return r;
}

std::string listaPersonas::toString() const {
    std::stringstream ss;
    ss << "[";
    for (auto p : * this) {
        ss << "\n\t" << p;
    }
    ss << "\n]";
    return ss.str();
}
