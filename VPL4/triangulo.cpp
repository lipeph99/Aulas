#include "triangulo.hpp"

Triangulo::Triangulo(double base, double altura) {
    this->base = base;
    this->altura = altura;
}

double Triangulo::calcularArea() {
    return base * altura / 2;
}

bool Triangulo::maiorQue(Triangulo* t){
    double area1 = this->base * this->altura / 2;
    double area2 = t->base * t->altura / 2;
    if (area1 > area2){
        return true;
    } else {
        return false;
    }
}