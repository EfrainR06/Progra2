//Efrain Retana Segura UNA

#include <iomanip>
#include <sstream>
#include <typeinfo>
#include "baseObject3.h"

using namespace std;

namespace base {
    bool baseObject3Adapter::operator==(const baseObject3 &obj) const {
        return this == &obj;
    }
    string baseObject3Adapter::toString() const {
        stringstream r;
        r << typeid(*this).name();
        r << "@" << hex << this;
        return r.str();
    }
}

ostream& operator<<(ostream &out, const base::baseObject3 &obj) {
    out << obj.toString();
    return out;
}