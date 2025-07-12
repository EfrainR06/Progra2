//Efrain Retana Segura UNA

#include "token.h"

std::string* getTokens(std::istream& ss, char separator) {
    std::string* r = new std::string[64];
    int k = 0;
    bool done = false;
    while (!done) {
        std::string t;
        std::getline(ss, t, separator);
        if (!(done = t.empty())) {
            r[k++] = t;
        }
    }
    r[k++] = ""; // End marker
    return r;
}
//Efrain Retana Segura UNA