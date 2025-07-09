// Efrain Retana Segura UNA

#ifndef BASEOBJECT2_H
#define BASEOBJECT2_H

#include <iostream>

namespace base {
    class baseObject2 {
    public:
        virtual ~baseObject2();

        virtual bool operator==(const baseObject2&) const;
        virtual std::string toString() const;
    };
}

std::ostream& operator<<(std::ostream&, const base::baseObject2&);

#endif //BASEOBJECT2_H
