//Efrain Retana Segura

#include <iomanip>
#include <sstream>
#include <typeinfo>
#include "baseObject1.h"

using namespace std;
namespace base {

    baseObject1::~baseObject1() {
    }

    bool baseObject1::operator==(const baseObject1 &obj) const {
        return this == &obj;
    }

    string baseObject1::toString() const {
        stringstream r;
        r << typeid (*this).name();
        r << "@" << hex << this;
        return r.str();
    }
}

ostream& operator<<(ostream &out, const base::baseObject1 &obj) {
    out << obj.toString();
    return out;
}
