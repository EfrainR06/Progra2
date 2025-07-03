//Efrain Retana Segura UNA
#ifndef PUNTO_H
#define PUNTO_H

#define PRECISION_FMT 5
#include  <iostream>


class punto {
public:
    punto();
    virtual ~punto();
    virtual std::string toString() const = 0;

    virtual punto& desplazar(double =0.0, double = 0.0) = 0;
    virtual punto& rotar (double = 0.0) = 0;

    virtual punto& setX(double) = 0;
    virtual punto& setY(double) = 0;
    virtual punto& setR(double) = 0;
    virtual punto& setA(double) = 0;

    virtual double x() const = 0;
    virtual double y() const = 0;
    virtual double r() const = 0;
    virtual double a() const = 0;

};

class puntoRectangular : public punto {
public:
    ~puntoRectangular();
    puntoRectangular(double = 0.0, double = 0.0);

    std::string toString() const override;

    virtual punto& desplazar(double = 0.0, double = 0.0);
    virtual punto& rotar(double = 0.0);

    punto& setX(double) override;
    punto& setY(double) override;
    punto& setR(double) override;
    punto& setA(double) override;

    double x() const override;
    double y() const override;
    double r() const override;
    double a() const override;

private:
    double _x;
    double _y;
};

class puntoPolar : public punto {
public:
    ~puntoPolar();
    puntoPolar(double = 0.0, double = 0.0);

    std::string toString() const override;

    virtual punto& desplazar(double = 0.0, double = 0.0);
    virtual punto& rotar(double = 0.0);

    punto& setX(double) override;
    punto& setY(double) override;
    punto& setR(double) override;
    punto& setA(double) override;

    double x() const override;
    double y() const override;
    double r() const override;
    double a() const override;
private:
    void normalize();

    double _r;
    double _a;
};

std::ostream& operator << (std::ostream&, punto&);


#endif //PUNTO_H
