#ifndef VEICULOTERRESTRE_H_INCLUDED
#define VEICULOTERRESTRE_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#pragma once
#include "veiculo.h"

using namespace std;


class VeiculoTerra: virtual public Veiculo {

    private:
        string placa;
        int valorpneu, qntRodas;
    
    public:
        VeiculoTerra(string modelo, int valor, int ano, string placa, int valorpneu, int qntRodas);

        void setPlaca(string placa);
        void setValorpneu(int valorpneu);
        void setQntRodas(int qntRodas);

        string getPlaca();
        int getValorpneu();
        int getQntRodas();
        void print();
        
};

#endif