//Efrain Retana Segura UNA
/*
#include <cstdlib>
#include <iostream>

#include "contexto.h"

using namespace std;

int main(int argc, char** argv) {

    srand((long) time(0L));

    contexto ctx;
    try {
        int e = rand() % 3;
        switch (e) {
            case 0:
                ctx.establecerEstrategia(new estrategiaA());
                break;
            case 1:
                ctx.establecerEstrategia(new estrategiaB());
                break;
            default:
                ctx.establecerEstrategia(new estrategiaC());
        }
        ctx.m();
    } catch (runtime_error& ex) {
        cerr << "Excepción: " << ex.what() << endl;
    }

    return 0;
}
*/
