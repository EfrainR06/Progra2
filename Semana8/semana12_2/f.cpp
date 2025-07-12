//Efrain Retana Segura UNA
#include <stdexcept>
#include "d1.h"
#include "d2.h"
#include "d3.h"
#include "f.h"

b4* f::crearInstancia(int t) {
    b4* r = nullptr;
    switch (t) {
        case _D1:
            r = new d1(0);
            break;
        case _D2:
            r = new d2();
            break;
        case _D3:
            r = new d3();
            break;
        default:
            throw std::runtime_error("subclase no existe");
    }
    return r;
}
