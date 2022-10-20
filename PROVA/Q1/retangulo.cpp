#include <iomanip>
#include <iostream>
#include <string>
#include "retangulo.h"

Retangulo::Retangulo(float base, float altura) {
    this->base = base;
    this->altura = altura;
}

void Retangulo::setBase(float base) {
    this->base = base;
}
void Retangulo::setAltura(float altura) {
    this->altura = altura;
}

float Retangulo::getBase() {
    return this->base;
}
float Retangulo::getAltura() {
    return this->altura;
}

float Retangulo::calculaArea() {
    float area = this->base * this->altura;
    return area;
}

float Retangulo::calculaPerimetro() {
    float perimetro = 2 * (this->base + this->altura);
    return perimetro;
}

void Retangulo::print() {
    cout << "Area do retangulo: " << calculaArea() << endl;
    cout << "Perimetro do retangulo: " << calculaPerimetro() << endl;
}