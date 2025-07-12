//Efrain Retana Segura UNA
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdexcept>

#include "ansi_term1.h"
#include "contexto2.h"
#include "estrategia2.h"

using namespace std;
using namespace ansi_term1;

int main(int, const char*[]);
bool verificar(string);

int main(int, const char*[]) {

    init(UNICODE_CP);

    string textoPrueba = "../cita.txt";
    if(!verificar(textoPrueba)) {
        throw runtime_error("No se encuentra el archivo de prueba.");
    }

    contexto2 prueba;
    int respuesta, ancho;

    string prompt1("Seleccione una estrategia:\n - Izquierda(1)\n - Derecha(2)\n - Centro(3)\n - Salir (0)\n> ");
    string prompt2("Ancho > ");

    bool continuar = true;

    while (continuar) {
        cout << color(WHITE) << prompt1;
        cout << color(BRIGHT_YELLOW);

        if ((continuar = ((cin >> respuesta) && (respuesta != 0)))) {
            cout << color(WHITE) << prompt2;
            cout << color(BRIGHT_YELLOW);
            cin >> ancho;

            prueba.establecerEstrategia(respuesta, ancho);
            prueba.ejecutar(textoPrueba);
        }
    }

    cout << color(WHITE);
    cout << "Programa finalizado normalmente.." << endl;
    cout << endl;
    cout << reset();

    return 0;
}

bool verificar(string archivo) {
    bool exito = false;
    fstream f(archivo);
    if (f.good()) {
        exito = true;
        f.close();
    }
    return exito;
}
