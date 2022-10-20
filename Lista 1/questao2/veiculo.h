#ifndef VEICULO_H
#define VEICULO_H
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Veiculo {

private:
    int peso;
    int velMax;
    float preco;

public:
    Veiculo() = default;
    Veiculo(int peso, int velMax, float preco);

    void setPeso(int);
    int getPeso();
    void setVelMax(int);
    int getVelMax();
    void setPreco(float);
    float getPreco();

    void print();

};

#endif