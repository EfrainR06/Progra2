//Efrain Retana Segura UNA
#include <sstream>
#include "baseObject.h"

namespace base {

    baseObject::~baseObject() {
    }

    std::string baseObject::toString() const {
        std::stringstream ss;
        return ss.str();
    }
}

std::ostream& operator<<(std::ostream& out, const base::baseObject& obj) {
    out << obj.toString();
    return out;
}


