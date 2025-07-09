//Efrain Retana Segura UNA
/*
#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
T suma(T a, T b) {
    return a + b;
}

template <>
string suma<string>(string a, string b) {
    return a + b;
}

string concatenar(string s1, string s2) {
    return suma(s1, s2);
}

int main (int, const char*[]) {

    cout << suma(5, 10) << endl;
    cout << suma(5.5, 2.3) << endl;

    //Aqui se debe especificar el tipo ya que el compilador
    // no puede deducirlo con la expresión.

    cout << suma<string> ("Uno", "Dos") << endl;

    //Aquí no hay problema, ya que la definición de la función
    // Se especifica de manera expliícita el tipo de los parámetros.

    cout << concatenar("Tres", "Cuatro") << endl;

    return 0;
}

*/