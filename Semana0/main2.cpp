// Efrain Retana Segura UNA

#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int, const char*[]);
void cribaEratostenes(int);

int main (int, const char*[]) {
    const int M= 1000;
    int n;
    cout << "Limite superior:";
    if ((cin >> n) && (2 <= n) && (n <= M)) {
        cribaEratostenes(n);
    } else {
        cerr << "El limite superior debe ser un valor ";
        cerr << "entre 2 y " << M << endl;
    }
    return 0;
}
void cribaEratostenes(int n) {
    vector<bool> esPrimo(n + 1, true);
    esPrimo[0] = esPrimo[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (esPrimo[p]) {
            for (int i = p * p; i <= n; i += p) {
                esPrimo[i] = false;
            }
        }
    }

    cout <<"Numero primos hasta " << n << " son: \n";
    int L =16;
    int k = 0;
    int p= 0;

    for (int i = 2; i <= n; i++) {
        if (esPrimo[i]) {
            cout << setw(4) << i << " ";
            k++;
            p++;
        }
        if ((p > 0) && (p % L) == 0) {
            cout <<endl;
            p = 0;
        }
    }
    cout <<endl;
    cout << "Existen " << k << " numeros primos ";
    cout << "menores o iguales a " << n << "." << endl;
    cout << endl;
}