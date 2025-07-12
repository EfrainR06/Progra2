//Efrain Retana Segura UNA

#ifndef IA_H
#define IA_H



class ia {
public:
    virtual ~ia() = default;

    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual void m8() = 0;
};

class adapter : public ia {
public:
    virtual void m1() override;
    virtual void m2() override;
    virtual void m3() override;
    virtual void m4() override;
    virtual void m5() override;
    virtual void m6() override;
    virtual void m7() override;
    virtual void m8() override;
};



#endif //IA_H
