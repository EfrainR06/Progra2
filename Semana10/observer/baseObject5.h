//Efrain Retana Segura UNA
#ifndef BASEOBJECT5_H
#define BASEOBJECT5_H

#include <iostream>
namespace base {
    class baseObject5 {
    public:
        virtual ~baseObject5() = default;

        virtual bool operator==(const baseObject5&) const = 0;
        virtual std::string toString() const = 0;
    };

    class baseObject5Adapter : public baseObject5 {
    public:
        virtual bool operator==(const baseObject5&) const override;
        virtual std::string toString() const override;
    };
}
std::ostream& operator<<(std::ostream&, const base::baseObject5&);

#endif // BASEOBJECT5_H