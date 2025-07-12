//Efrain Retana Segura UNA

#include <cstdlib>
#include <iostream>

#include "contexto1.h"

using namespace std;

int main(int argc, char** argv) {

    srand((long) time(0L));

    contexto1 ctx;
    try {
        int e = rand() % 3;
        switch (e) {
            case 0:
                ctx.establecerEstrategia(new estrategia1A());
                break;
            case 1:
                ctx.establecerEstrategia(new estrategia1B());
                break;
            default:
                ctx.establecerEstrategia(new estrategia1C());
        }
        ctx.m();
    } catch (runtime_error& ex) {
        cerr << "Excepción: " << ex.what() << endl;
    }

    return 0;
}