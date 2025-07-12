//Efrain Retana Segura UNA

#include <stdexcept>
#include <iostream>
#include "contexto1.h"

contexto1::contexto1() : _e(nullptr) {
}
void contexto1::establecerEstrategia(estrategia1* e) {
    _e = e;
}
void contexto1::m() {
    if (_e != nullptr) {
        _e->m();
    } else {
        throw std::runtime_error("estrategia no definida.");
    }
}