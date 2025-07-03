//Efrain Retana Segura UNA

#include <iostream>
#include <sstream>
#include "b1.h"

b1::b1(std::string e) : _e(e) {
    std::cout << "b1::b1('" << _e << "')" << std::endl;
}

b1::~b1() {
    std::cout << "b::~b('" << _e << "')" << std::endl;
}

std::string b1::toString() const {
    std::stringstream ss;
    ss << "b1:{e: '" << _e << "'}";
    return ss.str();
}
