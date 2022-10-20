#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"
using namespace std;

Veiculo::Veiculo(int peso, int velMax, float preco){
    setPeso(peso);
    setVelMax(velMax);
    setPreco(preco);
}

void Veiculo::setPeso(int peso){
    this->peso = peso;
}
void Veiculo::setVelMax(int velMax){
    this->velMax = velMax;
}
void Veiculo::setPreco(float preco){
    this->preco = preco;
}
int Veiculo::getPeso(){
    return peso;
}
int Veiculo::getVelMax(){
    return velMax;
}
float Veiculo::getPreco(){
    return preco;
}

void Veiculo::print(){
    cout << "Peso: " << getPeso() << endl;
    cout << "Velocidade Maxima: " << getVelMax() << endl;
    cout << "Preco: " << getPreco() << endl;
}
