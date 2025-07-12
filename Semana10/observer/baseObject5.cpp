//Efrain Retana Segura UNA

#include <iomanip>
#include <sstream>
#include <typeinfo>
#include "baseObject5.h"

using namespace std;

namespace base {
    bool baseObject5Adapter::operator==(const baseObject5 &obj) const {
        return this == &obj;
    }
    string baseObject5Adapter::toString() const {
        stringstream r;
        r << typeid(*this).name();
        r << "@" << hex << this;
        return r.str();
    }
}
ostream& operator<<(ostream &out, const base::baseObject5 &obj) {
    out << obj.toString();
    return out;
}