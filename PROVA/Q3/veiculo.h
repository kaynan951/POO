#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Veiculo {
private:
    string nome;
    int peso;
    int potencia;

public: 
    Veiculo(string nome, int peso, int potencia);

    string getNome();
    int getPeso();
    int getPotencia();

    void setNome(string nome);
    void setPeso(int peso);
    void setPotencia(int potencia);

    void Print();
};


#endif
