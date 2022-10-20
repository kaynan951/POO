#include <iostream>
using namespace std;
#include "Veiculo.h"

// construtores
Veiculo::Veiculo(){};
Veiculo::Veiculo(float peso, float velmax, float preco)
{
    setpeso(peso);
    setvelmax(velmax);
    setpreco(preco);
};


float Veiculo::getpeso()
{
    return peso;
}

float Veiculo::getvelmax()
{
    return velmax;
}

float Veiculo::getpreco()
{
    return preco;
}


void Veiculo::setpeso(float peso)
{
    this->peso = peso;
}

void Veiculo::setvelmax(float velmax)
{
    this->velmax = velmax;
}

void Veiculo::setpreco(float preco)
{
    this->preco = preco;
}


void Veiculo::print()
{
    cout << "As caracteristicas do Veiculo" << endl;
    cout << "O peso: " << getpeso() << endl;
    cout << "A velocidade maxima: " << getvelmax() << endl;
    cout << "O preco: " << getpreco() << endl;
}