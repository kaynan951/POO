#include <iomanip>
#include <iostream>
#include <string>
#include "veiculopasseio.h"

VeiculoPasseio::VeiculoPasseio(string nome, int peso, int potencia, int volumeinterno) : Veiculo(nome, peso, potencia) {
    this->volumeinterno = volumeinterno;
}

int VeiculoPasseio::getVolumeInterno() {
    return volumeinterno;
}

void VeiculoPasseio::setVolumeInterno(int volumeinterno) {
    this->volumeinterno = volumeinterno;
}

float VeiculoPasseio::peso_potencia() {
    float peso_potencia = getPeso() / getPotencia();
    return peso_potencia;
}

void VeiculoPasseio::Print() {
    Veiculo::Print();
    cout << "Volume interno: " << getVolumeInterno() << endl;
    cout << "Peso_Potencia do Volume Passeio: " << peso_potencia() << endl;
}
