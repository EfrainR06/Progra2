//Efrain Retana Segura UNA
#ifndef ESTRATEGIA1_H
#define ESTRATEGIA1_H

class estrategia1 {
public:
    virtual void m() = 0;
};

class estrategia1A : public estrategia1 {
public:
    virtual void m() override;
};

class estrategia1B : public estrategia1 {
public:
    virtual void m() override;
};

class estrategia1C : public estrategia1 {
public:
    virtual void m() override;
};

#endif // ESTRATEGIA1_H