// Efrain Retana Segura UNA
/*

#include <cstdlib>
#include <exception>
#include <iostream>
#include "clases.h"

using namespace std;

int main(int, const char*[]) {

    a1 gestor("g0", 24);
    try {
        gestor
                .agregar(new b1("b1"))
                .agregar(new b1("b2"))
                .agregar(new b1("b3"))
                .agregar(new b1("b4"))
                .agregar(new b1("b5"))
                .agregar(new b1("b6"))
                .agregar(new b1("b7"))
                .agregar(new b1("b8"));

    } catch (const exception& ex) {
        cerr << "Error al agregar: '" << ex.what() << "'" << endl;
    }
    cout << gestor << endl;
    cout << endl;

    // ----------------------------------------------------------------

    a1 a12("a1");
    cout << a12 << endl;
    try {
        a12.agregarTodos(gestor);
    } catch (const exception& ex) {
        cerr << "Error al agregar: '" << ex.what() << "'" << endl;
    }

    cout << a12 << endl;
    cout << endl;

    a1 a2(a12);
    cout << a2 << endl;
    cout << endl;

    for (int i = 0; i < 4; i++) {
        a12.eliminar();
    }
    cout << a12 << endl;
    cout << a2 << endl;
    cout << endl;

    a12.eliminarTodos();
    a2.eliminarTodos();
    gestor.eliminarTodos(true);
    cout << endl;

    return 0;
}
*/
