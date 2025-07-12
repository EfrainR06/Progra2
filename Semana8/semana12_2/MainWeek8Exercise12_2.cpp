//Efrain Retana Segura UNA
/*
#include <cstdlib>
#include <iostream>
#include "clases4.h"

using namespace std;

int main(int, const char**) {

    b4* x = f::crearInstancia(_D1);
    x->m1();
    b4* y = f::crearInstancia(_D2);
    y->m1();
    b4* z = f::crearInstancia(_D3);
    z->m1();

    delete x;
    delete y;
    delete z;

    cout << endl;

    // ----------------------------------------------------------------

    int t = 0;
    while (t != -1) {
        cout << "t? ";
        if (cin >> t) {
            if (t != -1) {
                try {
                    b4* w = f::crearInstancia(t);
                    w->m1();
                    delete w;
                } catch (exception& ex) {
                    cerr << "\nexcepcion: '" << ex.what() << "'" << endl;
                }
            }
        } else {
            cin.ignore(1024, '\n');
            cin.clear();
        }
    }

    return 0;
}

*/