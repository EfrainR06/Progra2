//Efrain Retana Segura UNA

#include "punto.h"

punto::punto() {
    //std::cout << "punto::punto()" << std::endl;
}

punto::~punto() {
    //std::cout <<"punto::punto()" << std::endl;
}
std::ostream& operator<<(std::ostream & out, punto & p) {
    out << p.toString();
    return out;
}
