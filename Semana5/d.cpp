// Efrain Retana Segura UNA
#include "d.h"

d::d(b2& b1) : _b(b1) {
}
void d::m1() {
    _b.m1(); // El método se ejecuta por DELEGACION
}
