//Efrain Retana Segura UNA
#include <stdexcept>
#include <typeinfo>
#include <iostream>
#include <sstream>
#include "b5.h"
#include "token.h"

using namespace std;

b5::b5(string e) : _e(e) {
}

b5* b5::leer(istream& entrada) {
    b5* r = nullptr;

    string d;
    getline(entrada, d, '\n');

    stringstream ss(d);
    string* tk = getTokens(ss, '\t');

    if (tk[0] == typeid(b5).name()) {
        string s = tk[1];
        r = new b5(s);
    } else if (tk[0] == typeid(d1).name()) {
        string s = tk[1];
        r = new d1(s);
    } else if (tk[0] == typeid(d2).name()) {
        string s = tk[1];
        int m = stot<int>(tk[2]);
        r = new d2(s, m);
    } else {
        throw runtime_error("No existe la clase: '" + tk[0] + "'");
    }

    delete[] tk;
    return r;
}

void b5::escribir(ostream& salida) const {
    abrir(salida);
    guardarCampos(salida);
    cerrar(salida);
}

void b5::escribir(ostream& salida, const b5& obj) {
    obj.escribir(salida);
}

string b5::toString() const {
    stringstream ss;
    ss << ":b5 {";
    ss << "e: '" << e() << "'";
    ss << "}";
    return ss.str();
}

string b5::e() const {
    return _e;
}

void b5::abrir(ostream& salida) const {
    salida << typeid(*this).name() << "\t";
}

void b5::cerrar(ostream& salida) const {
    salida << "\n";
}

void b5::guardarCampos(ostream& salida) const {
    salida <<"\t"<< _e;
}

//----------------------------------------------------------------------------

d1::d1(string e) : b5(e) {

}

d2::d2(string e, int m) : b5(e), _m(m) {

}


string d1::toString() const {
    stringstream ss;
    ss << ":d1 {";
    ss << "e: '" << e();
    ss << "}";
    return ss.str();

}

//----------------------------------------------------------------------------

void d2::guardarCampos(ostream& salida) const {
    b5::guardarCampos(salida);
    salida << "\t" << _m;
}

string d2::toString() const {
    stringstream ss;
    ss << ":d2 {";
    ss << "e: '" << e() << "', ";
    ss << "m: " << m();
    ss << "}";
    return ss.str();
}
int d2::m() const {
    return _m;
}