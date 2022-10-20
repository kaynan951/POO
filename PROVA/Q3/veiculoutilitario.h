#ifndef VEICULO_UTILITARIO_H_INCLUDED
#define VEICULO_UTILITARIO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "veiculopasseio.h"
#include "veiculocarga.h"
using namespace std;

class VeiculoUtilitario : public VeiculoPasseio , public VeiculoCarga {

public:
    VeiculoUtilitario(string nome, int peso, int potencia, int volumeinterno, int carga);

    VeiculoUtilitario operator+(int aux);
    VeiculoUtilitario operator-(int aux);
    
    float peso_potencia();
    void Print();
};

#endif