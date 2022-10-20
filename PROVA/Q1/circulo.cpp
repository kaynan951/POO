#include <iomanip>
#include <iostream>
#include <string>
#include "circulo.h"

Circulo::Circulo(float raio) {
    this->raio = raio;
}

void Circulo::setRaio(float raio) {
    this->raio = raio;
}

float Circulo::getRaio() {
    return this->raio;
}

float Circulo::calculaArea() {
    float area = 3.14 * this->raio * this->raio;
    return area;
}

float Circulo::calculaPerimetro() {
    float perimetro = 2 * 3.14 * this->raio;
    return perimetro;
}

void Circulo::print() {
    cout << "Area do circulo: " << calculaArea() << endl;
    cout << "Perimetro do circulo: " << calculaPerimetro() << endl;
}