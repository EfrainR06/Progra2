//Efrain Retana Segura UNA

#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <iostream>

namespace base {
    class baseObject {
    public:
        virtual ~baseObject();
        virtual std::string toString() const;
    };
}

std::ostream& operator<<(std::ostream&, const base::baseObject&);


#endif //BASEOBJECT_H
