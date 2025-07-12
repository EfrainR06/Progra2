//Efrain Retana Segura UNA

#include <cassert>
#include <iostream>
#include "ansi_term.h"
#include "matriz.h"

using std::cout;
using namespace ansi_term;

matriz::matriz(int filas, int columnas) : _mf(filas), _mc(columnas), _v(new int[_mf * _mc]) {
    for (int f = 0; f < _mf; f++) {
        for (int c = 0; c < _mc; c++) {
            _v[f * _mc + c] = -1;
        }
    }
}

matriz::~matriz() {
    delete[] _v;
}

void matriz::init(double p) {
    int k = 0;
    for (int f = 0; f < _mf; f++) {
        for (int c = 0; c < _mc; c++) {
            double z = 1.0 * rand() / RAND_MAX;
            if (z < p) {
                _v[f * _mc + c] = k++ % 10;

            }
        }
    }
}

void matriz::mover() {
    for (int f0 = 0; f0 < _mf; f0++) {
        for (int c0 = 0; c0 < _mc; c0++) {
            int v = _v[f0 * _mc + c0];

            // Si existe un elemento en la posicion [c0,f0]..

            if (v >= 0) {

                // Se calcula una nueva posición..

                int dh = rand() % 3 - 1; // [0..+2] -> [-1..+1]
                int dv = rand() % 3 - 1; // [0..+2] -> [-1..+1]
                assert((-1 <= dh) && (dh <= +1) && (-1 <= dv) && (dv <= +1));

                int f1 = f0 + dv;
                int c1 = c0 + dh;

                // Se verifica si la nueva posición es válida..

                bool valido = true;

                valido &= ((0 <= f1) && (f1 < _mf));
                valido &= ((0 <= c1) && (c1 < _mc));

                // y se encuentra vacía.

                valido &= _v[f1 * _mc + c1] < 0;

                if (valido) {
                    _v[f1 * _mc + c1] = v;
                    _v[f0 * _mc + c0] = -1;
                }
            }

        }
    }
}

void matriz::desplegar(int x0, int y0) const {
    cout << gotoxy(x0, y0);
    cout << color(BRIGHT_BLACK);
    cout << "+" << std::string(4 * _mc - 1, '-') << "+";

    for (int f = 0; f < _mf; f++) {
        cout << gotoxy(x0, y0 + f + 1);
        cout << color(BRIGHT_BLACK) << "|";
        for (int c = 0; c < _mc; c++) {
            int v = _v[f * _mc + c];
            if (v < 0) {
                cout << color(BRIGHT_BLACK);
                cout << " \xC2\xB7 |";
            } else {
                cout << " " << color(_color[(v + 1) % 5]) << v;
                cout << color(BRIGHT_BLACK) << " |";
            }
        }
    }

    cout << gotoxy(x0, y0 + _mf + 1);
    cout << color(BRIGHT_BLACK);
    cout << "+" << std::string(4 * _mc - 1, '-') << "+";
}

int& matriz::operator()(int fila, int columna) {
    return _v[fila * _mc + columna];
}

int matriz::_color[] = {
    BRIGHT_BLUE, BRIGHT_GREEN, BRIGHT_YELLOW, BRIGHT_RED, BRIGHT_MAGENTA
};
