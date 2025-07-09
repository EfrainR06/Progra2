//Efrain Retana Segura UNA


#include <cstdlib>
#include <iostream>

#include "smartPtr.h"
#include "a3.h"

using namespace std;

int main(int, char**) {
    {
        smartPtr<a3> sp1(new a3());
        {
            smartPtr<a3> sp2 = sp1;
            sp2->m1();
        } // sp2 sale de alcance..

        cout << sp1 << endl;

    } // sp1 sale de alcance..

    cout << "Programa finalizado normalmente.." << endl;

    return 0;
}
