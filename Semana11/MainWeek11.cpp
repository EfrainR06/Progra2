/*
#include <cstdlib>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <thread>
#include "ansi_term.h"
#include "matriz.h"
*/
/* -------------------------------------------------------------------+
 *                                                                    |
 * (c) 2025                                                           |
 * Georges Alfaro S.                                                  |
 * version 1.0.0 2025-06-08                                           |
 *                                                                    |
 * -------------------------------------------------------------------+
 */

/*
using namespace std;
using namespace ansi_term;

int main(int, const char*[]);
void delayMilliseconds(int);
template <class T> T stot(std::string);

int main(int argc, const char* argv[]) {

    srand((long) time(0L));
    init();
    cout << home() << clear();

    // ----------------------------------------------------------------------------

    int max_filas = 12;
    int max_cols = 16;
    double p = 0.10; // Probabilidad de incluir un valor en una posición cualquiera.
    int max_it = 48; // Número máximo de iteraciones.
    int espera = 500; // Milisegundos entre iteraciones.

    // ----------------------------------------------------------------------------
    //
    // Observe que como el texto se muestra en posiciones específicas
    // de la pantalla, no es necesario incluir los fines de línea.

    cout << gotoxy(1, 1) << color(BRIGHT_RED);
    cout << "El programa debe ejecutarse desde la consola para que el despliegue ";
    cout << "se muestre correctamente.";
    cout << gotoxy(1, 3) << color(YELLOW) << "Tabla de ejemplo.";

    matriz m(max_filas, max_cols);
    m.init(p);
    for (int k = 0; k < max_it; k++) {
        cout << gotoxy(1, 5) << color(BRIGHT_GREEN);
        cout << clear_eol() << "k: " << setw(2) << k << "/" << setw(2) << max_it;

        m.desplegar(1, 6);
        delayMilliseconds(espera);
        m.mover();
    }

    cout << gotoxy(1, 25) << color(WHITE) << "Programa finalizado...";

    return 0;
}

void delayMilliseconds(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

template <class T>
T stot(std::string s) {
    T r = 0;
    if (!s.empty()) {
        std::stringstream ss(s);
        if (!(ss >> r)) {
            throw std::exception();
        }
    } else {
        throw std::exception();
    }
    return r;
}
*/