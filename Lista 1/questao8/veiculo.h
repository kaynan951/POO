#include <iomanip>
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Veiculo{

    private:
        string modelo;
        int valor, ano;

    public:
        Veiculo(string modelo, int valor, int ano);

        void setModelo(string modelo);
        void setValor(int valor);
        void setAno(int ano);

        string getModelo();
        int getValor();
        int getAno();
        void print();
        

};
