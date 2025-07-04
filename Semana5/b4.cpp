//Efrain Retana Segura UNA
#include "b4.h"
#include <iostream>

b4::b4(b2& d1) : d(d1) {
}

void b4::m3() {
    _b.m1();
    std::cout << "b4::m3()" << std::endl;
}
