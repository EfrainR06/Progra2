//Efrain Retana Segura UNA

#include <exception>
#include <sstream>
#include <fstream>
#include <string>
#include "ansi_term1.h"
#include "estrategia2.h"

using namespace std;
using namespace ansi_term1;

estrategia2::estrategia2(int ancho) : _ancho(ancho) {
}

string estrategia2::darFormato(string archivo) {
    stringstream r;
    ifstream entrada(archivo.c_str());

    // Si el archivo se abre correctamente, se leen todas las
    // líneas que contiene, justificando cada una.

    if (entrada.good()) {

        while (entrada.good()) {
            string texto;
            getline(entrada, texto);

            // Para cada línea del archivo, se obtiene cada palabra
            // separándola con un único espacio.
            // Si el ancho de la línea excede el especificado, se
            // ignoran las palabras adicionales.

            if (entrada.good()) {

                stringstream buffer(texto);
                stringstream linea;
                string palabra;

                bool primeraPalabra = true;
                while (buffer >> palabra) {
                    if ((utf8_strlen(linea.str()) + utf8_strlen(palabra)) >= _ancho) {
                        break;
                    }
                    if (!primeraPalabra) {
                        linea << " ";
                    }
                    linea << palabra;
                    primeraPalabra = false;
                }

                r << justificar(linea.str()) << endl;
            }
        }

        entrada.close();
        return r.str();

    } else {
        throw exception();
    }
}

estrategia2Izquierda::estrategia2Izquierda(int ancho) : estrategia2(ancho) {
}
string estrategia2Izquierda::justificar(string linea) {
    stringstream r;
    r << linea;
    return r.str();
}

estrategia2Derecha::estrategia2Derecha(int ancho) : estrategia2(ancho) {
}
string estrategia2Derecha::justificar(string linea) {
    stringstream r;
    if (utf8_strlen(linea) < _ancho) {
        r << string(_ancho - utf8_strlen(linea), ' ');
    }
    r << linea;
    return r.str();
}
estrategia2Centrar::estrategia2Centrar(int ancho) : estrategia2(ancho) {
}

string estrategia2Centrar::justificar(string linea) {
    stringstream r;
    if (utf8_strlen(linea) < _ancho) {
        r << string((_ancho - utf8_strlen(linea)) / 2, ' ');
    }
    r << linea;
    return r.str();
}
