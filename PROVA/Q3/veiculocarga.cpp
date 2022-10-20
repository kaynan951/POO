#include <iomanip>
#include <iostream>
#include <string>
#include "veiculocarga.h"

VeiculoCarga::VeiculoCarga(string nome, int peso, int potencia, int carga) : Veiculo(nome, peso, potencia) {
    this->carga = carga;
}

int VeiculoCarga::getCarga() {
    return carga;
}

void VeiculoCarga::setCarga(int carga) {
    this->carga = carga;
}      

float VeiculoCarga::peso_potencia() {
    float peso_potencia = (getPeso() + getCarga()) / getPotencia();
    return peso_potencia;
}

void VeiculoCarga::Print() {
    cout << "Carga: " << getCarga() << endl;
    cout << "Peso_Potencia do Veiculo Carga: " << peso_potencia() << endl;
}