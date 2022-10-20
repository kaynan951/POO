#include <iomanip>
#include <iostream>
#include <string>
#include "cilindro.h"

Cilindro::Cilindro(float base, float altura, float raio) : Circulo(raio), Retangulo(base, altura) {
   
}

float Cilindro::calculaArea() {
    float area = 2 * 3.14 * this->getRaio() * this->getAltura() + 2 * 3.14 * this->getRaio() * this->getRaio();
    return area;
}

float Cilindro::calculaVolume() {
    float volume = 3.14 * this->getRaio() * this->getRaio() * this->getAltura();
    return volume;
}

void Cilindro::print() {
    Retangulo::print();
    Circulo::print();
    cout << "Area do cilindro: " << calculaArea() << endl;
    cout << "Volume do cilindro: " << calculaVolume() << endl;
}