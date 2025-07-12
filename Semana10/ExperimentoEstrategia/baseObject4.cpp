//Efrain Retana Segura UNA

#include <iomanip>
#include <sstream>
#include <typeinfo>
#include "baseObject4.h"

using namespace std;

namespace base {

    bool baseObject4Adapter::operator==(const baseObject4 &obj) const {
        return this == &obj;
    }

    string baseObject4Adapter::toString() const {
        stringstream r;
        r << typeid(*this).name();
        r << "@" << hex << this;
        return r.str();
    }
}

ostream& operator<<(ostream &out, const base::baseObject4 &obj) {
    out << obj.toString();
    return out;
}