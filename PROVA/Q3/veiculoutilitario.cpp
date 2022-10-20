#include <iomanip>
#include <iostream>
#include <string>
#include "veiculoutilitario.h"

VeiculoUtilitario::VeiculoUtilitario(string nome, int peso, int potencia, int carga, int volumeinterno) : VeiculoCarga(nome, peso, potencia, carga), VeiculoPasseio(nome, peso, potencia, volumeinterno) {

}

VeiculoUtilitario VeiculoUtilitario::operator + (int aux) {
    VeiculoUtilitario resultado = *this;
    resultado.setCarga(this->getCarga() + aux);
    return resultado;
}

    VeiculoUtilitario VeiculoUtilitario::operator - (int aux) {
    VeiculoUtilitario resultado = *this;
    resultado.setCarga(this->getCarga() - aux);
    return resultado;
}

void VeiculoUtilitario::Print() {
    VeiculoPasseio::Print();
    VeiculoCarga::Print();
    cout << "Peso_Potencia: " << VeiculoCarga::peso_potencia() << endl;
}