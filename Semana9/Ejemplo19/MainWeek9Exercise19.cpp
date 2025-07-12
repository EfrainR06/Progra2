//Efrain Retana Segura UNA
/*
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "clases5.h"

using namespace std;

int main(int, const char*[]) {

    string archivo("../datos_19.txt");

    ofstream salida(archivo);
    b5::escribir(salida, b5("v1"));
    b5::escribir(salida, d1("v2"));
    b5::escribir(salida, d2("v3", 7));
    b5::escribir(salida, d1("v4"));
    b5::escribir(salida, d1("v5"));
    b5::escribir(salida, b5("v6"));
    b5::escribir(salida, d2("v7", -4));
    salida.close();
    cout << endl;

    ifstream entrada(archivo);
    bool finalizado = false;
    while (!finalizado) {
        try {
            b5* x = b5::leer(entrada);
            if(x != nullptr) {
                cout << *x << endl;
            } else {
                cout << "(null)" << endl;
                finalizado = true;
            }
        } catch (exception& ex) {
            // cerr << "Excepción: " << ex.what() << endl;
            finalizado = true;
        }
    }
    entrada.close();
    cout << endl;

    cout << "Programa finalizado.." << endl;
    return 0;

}
*/