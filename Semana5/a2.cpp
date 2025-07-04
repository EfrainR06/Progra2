//Efrain Retana Segura UNA
#include "a2.h"
#include <iostream>

a2::~a2() {
}
void a2::p1(b2& b1) {
    std::cout << "a2::p1()" << std::endl;
    b1.m1();
}