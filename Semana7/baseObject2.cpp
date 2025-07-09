//Efrain Retana Segura UNA
#include <iomanip>
#include <sstream>
#include <typeinfo>
#include "baseObject2.h"

using namespace std;


namespace base {
    baseObject2::~baseObject2() {
    }
    bool baseObject2::operator==(const baseObject2 &obj) const {
        return this == &obj;
    }
    std::string baseObject2::toString() const {
        stringstream r;
        r << typeid (*this).name();
        r << "@" << hex << this;
        return r.str();
    }
}

ostream& operator<<(ostream &out, const base::baseObject2 &obj) {
    out << obj.toString();
    return out;
}