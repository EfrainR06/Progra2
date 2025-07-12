//Efrain Retana Segura UNA

#ifndef TOKEN_H
#define TOKEN_H

#include <exception>
#include <iostream>
#include <string>
#include <sstream>


std::string* getTokens(std::istream&, char ='\t');
template <class T> T stot(std::string);

template <class T>

T stot(std::string s) {
    T r = 0;
    if (!s.empty()) {
        std::stringstream ss(s);
        ss >> r;
    } else {
        throw std::exception();
    }
    return r;
}


#endif //TOKEN_H
