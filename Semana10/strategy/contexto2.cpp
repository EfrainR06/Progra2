//Efrain Retana Segura UNA
#include "contexto2.h"
#include <cstdlib>
#include <exception>
#include "ansi_term1.h"

contexto2::contexto2() : _estrategia(NULL) {
}

void contexto2::establecerEstrategia(int tipo, int ancho) {
    if (_estrategia != NULL) {
        delete _estrategia;
    }

    switch (tipo) {
        case IZQUIERDA:
            _estrategia = new estrategia2Izquierda(ancho);
            break;
        case DERECHA:
            _estrategia = new estrategia2Derecha(ancho);
            break;
        case CENTRO:
            _estrategia = new estrategia2Centrar(ancho);
            break;
        default:
            throw std::exception();
    }
}

void contexto2::ejecutar(std::string archivo) {
    std::cout << ansi_term1::color(ansi_term1::BRIGHT_BLUE);
    std::cout << _estrategia->darFormato(archivo);
    std::cout << ansi_term1::reset() << std::endl;
}

