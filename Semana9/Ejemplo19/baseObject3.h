//Efrain Retana Segura UNA

#ifndef BASEOBJECT3_H
#define BASEOBJECT3_H

#include <iostream>

namespace base {
    class baseObject3 {
    public:
        virtual ~baseObject3() = default;

        virtual bool operator==(const baseObject3&) const = 0;
        virtual std::string toString() const = 0;
    };
    class baseObject3Adapter : public baseObject3 {
    public:
        virtual bool operator==(const baseObject3&) const override;
        virtual std::string toString() const override;
    };
}

std::ostream& operator<<(std::ostream&, const base::baseObject3&);
#endif //BASEOBJECT3_H
