//Efrain Retana Segura UNA
#include <iostream>
#include "b.h"
#include "a.h"

void a::m(b& b1) {
    std::cout << "A.m()" << std::endl;
    b1.p();
}

void a::s() {
    std::cout <<"A.s()" << std::endl;
}