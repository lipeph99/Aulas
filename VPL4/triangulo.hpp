#ifndef M_PI
#define M_PI 3.14
#endif

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>

struct Triangulo {
    double base, altura;
    Triangulo(double, double);
    double calcularArea();
    bool maiorQue(Triangulo* t);
};

#endif