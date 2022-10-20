#ifndef VEICULOAQUATICO_H_INCLUDED
#define VEICULOAQUATICO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#pragma once
#include "veiculo.h"

using namespace std;

class VeiculoAqua: virtual public Veiculo {

    private:
        string marca;
        int gasolina, capacidade;
    
    public:
        VeiculoAqua(string modelo, int valor, int ano, string marca, int gasolina, int capacidade);

        void setMarca(string marca);
        void setGasolina(int gasolina);
        void setCapacidade(int capacidade);

        string getMarca();
        int getGasolina();
        int getCapacidade();
        
        void print();
        

};

#endif