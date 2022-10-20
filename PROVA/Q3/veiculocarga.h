#ifndef VEICULO_CARGA_H_INCLUDED
#define VEICULO_CARGA_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"
using namespace std;

class VeiculoCarga : public Veiculo {
private:
    int carga;

public:

    VeiculoCarga(string nome, int peso, int potencia, int carga);

    int getCarga();
    void setCarga(int carga);

    float peso_potencia();
    void Print();

};


#endif