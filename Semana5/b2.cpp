//Efrain Retana Segura UNA
#include "b2.h"
#include <iostream>

void b2::m1() { // sustituye m1 (override)
    std::cout << "b2::m1()" << std::endl;
}

void b2::m1(int p) { // sobrecarga m1 (overload)
    std::cout << "b2::m1(p: " << p << ")" << std::endl;
}

void b3::m1() {
    std::cout << "b3::m1()" << std::endl;
}
void b3::m2() {
    std::cout << "b3::m2()" << std::endl;
}
