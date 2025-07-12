//Efrain Retana Segura UNA
#ifndef BASEOBJECT4_H
#define BASEOBJECT4_H

#include <iostream>

namespace base {
    class baseObject4 {
    public:
        virtual ~baseObject4() = default;

        virtual bool operator==(const baseObject4&) const = 0;
        virtual std::string toString() const = 0;
    };

    class baseObject4Adapter : public baseObject4 {
    public:
        virtual bool operator==(const baseObject4&) const override;
        virtual std::string toString() const override;
    };
}

std::ostream& operator<<(std::ostream&, const base::baseObject4&);


#endif //BASEOBJECT4_H
