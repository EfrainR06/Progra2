//Efrain Retana Segura UNA

#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

class estrategia {
public:
    virtual void m() = 0;
};

class estrategiaA : public estrategia {
public:
    virtual void m() override;
};

class estrategiaB : public estrategia {
public:
    virtual void m() override;
};

class estrategiaC : public estrategia {
public:
    virtual void m() override;
};



#endif //ESTRATEGIA_H
