//Efrain Retana Segura UNA
#ifndef BASEOBJECT_H
#define BASEOBJECT_H
#include <iostream>

namespace base {

    class baseObject1 {
    public:
        virtual ~baseObject1();

        virtual bool operator==(const baseObject1&) const;
        virtual std::string toString() const;
    };
}

std::ostream& operator<<(std::ostream&, const base::baseObject1&);

#endif //BASEOBJECT_H
