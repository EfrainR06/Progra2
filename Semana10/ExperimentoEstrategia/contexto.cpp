//Efrain Retana Segura UNA
#include <stdexcept>
#include <iostream>
#include "contexto.h"

contexto::contexto() : _e(nullptr) {
}

void contexto::establecerEstrategia(estrategia* e) {
    _e = e;
}

void contexto::m() {
    if (_e != nullptr) {
        _e->m();
    } else {
        throw std::runtime_error("estrategia no definida.");
    }
}
