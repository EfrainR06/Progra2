//Efrain Retana Segura UNA

#ifndef MATRIZ_H
#define MATRIZ_H

class matriz {
public:
    matriz(int = 10, int = 16);
    virtual ~matriz();
    matriz(const matriz&) = delete;
    matriz& operator=(const matriz&) = delete;

    // Carga la matriz de dígitos aleatorios.
    // La probabilidad de generar un valor en una posición cualquiera es p.
    virtual void init(double p = 0.3);

    virtual void mover();

    // Muestra la matriz en la fila y0 y columna x0.
    virtual void desplegar(int x0 = 0, int y0 = 0) const;

    virtual int& operator()(int, int);

private:
    static int _color[];
    int _mf;
    int _mc;
    int* _v;
};

#endif /* MATRIZ_H */
