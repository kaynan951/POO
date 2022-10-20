#ifndef VEICULOANFI_H_INCLUDED
#define VEICULOANFI_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#pragma once
#include "veiculoTerrestre.h"
#include "veiculoaquatico.h"

using namespace std;

class VeiculoAnfi: public VeiculoTerra, public VeiculoAqua {

    private:
        string estilo;
        int parafolio, pregos;
    
    public:
        
        VeiculoAnfi(string modelo, int valor, int ano, string placa, int valorpneu, int qntRodas, string marca, int gasolina, int capacidade, string estilo, int parafolio, int pregos);

        void setEstilo(string estilo);
        void setParafolio(int parafolio);
        void setPregos(int pregos);

        string getEstilo();
        int getParafolio();
        int getPregos();

        void print();
        

};