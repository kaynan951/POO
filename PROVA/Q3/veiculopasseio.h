#ifndef VEICULO_PASSEIO_H_INCLUDED
#define VEICULO_PASSEIO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"
using namespace std;

class VeiculoPasseio : public Veiculo {
private:
    int volumeinterno;

public:
    VeiculoPasseio(string nome, int peso, int potencia, int volumeinterno);

    int getVolumeInterno();
    void setVolumeInterno(int volumeinterno);

    float peso_potencia();
    void Print();
};

#endif