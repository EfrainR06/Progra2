//Efrain Retana Segura UNA
/*
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

int main(int, const char*[]) {

    stringstream ss = stringstream("a\tb\tc\td\te\tf");

    int m = 24;
    int n = 0;
    string* tk = new string[m];

    bool finalizado = false;
    while (!finalizado) {
        string s;
        getline(ss, s, '\t');
        if (!(finalizado = s.empty())) {
            cout << "\t-> " << s << endl;
            tk[n++] = s;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "i: " << i << "\t:'" << tk[i] << "'" << endl;
    }
    delete[] tk;

    return 0;
}
*/