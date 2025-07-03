//Efrain Retana Segura UNA


#include <cstdlib>
#include <cmath>
#include <iostream>
#include "punto.h"

using namespace std;

int main(int argc, char** argv) {
    punto* p0 = new puntoPolar(1, M_PI * 4.0);
    cout << "p0: " << *p0 << endl;
    cout << endl;

    //    for (double da = 0.0; da <= 2 * M_PI; da += M_PI / 2.0) {
    //        p0->setA(da);
    //        cout << "p0: " << *p0 << endl;
    //    }

    double da = M_PI / 4.0;
    for (int i = 0; i <= 8; i++) {
        cout << "p0: " << *p0 << endl;
        p0->rotar(da);
    }

    cout << endl;

    delete p0;

    return 0;
}

