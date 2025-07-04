//Efrain Retana Segura UNA

/*
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,const char* argv[]) {

    string archivo = "../datos1.txt";
    if (argc == 2) {
        archivo= argv[1];
        cout << "Leyendo del archivo: '" << archivo << "'" << endl;
    }

    ifstream entrada(archivo);
    int n = 0;
    int v;

    while (entrada.good()) {
        if (entrada >> v) {
            n++;
            cout << "(" << n << "):" << v << endl;
        }
    }
    entrada.close();

    return 0;
}
*/