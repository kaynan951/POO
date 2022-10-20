#include <iomanip>
#include <iostream>
#include <string>
#include "caminhao.h"
using namespace std;

Caminhao::Caminhao(int peso, int velMax, float preco, int cilindros, int potencia, int toneladas, float alturaMax, float comprimento) : Veiculo(peso, velMax, preco), Motor(cilindros, potencia) {
    this->toneladas = toneladas;
    this->alturaMax = alturaMax;
    this->comprimento = comprimento;
}

void Caminhao::setToneladas(int toneladas){
    this->toneladas = toneladas;
}
void Caminhao::setAlturaMax(float alturaMax){
    this->alturaMax = alturaMax;
}
void Caminhao::setComprimento(float comprimento){
    this->comprimento = comprimento;
}
int Caminhao::getToneladas(){
    return toneladas;
}
float Caminhao::getAlturaMax(){
    return alturaMax;
}
float Caminhao::getComprimento(){
    return comprimento;
}

void Caminhao::print(){
    Veiculo::print();
    Motor::print();
    cout << "Toneladas: " << getToneladas() << endl;
    cout << "Altura máxima: " << getAlturaMax() << endl;
    cout << "Comprimento: " << getComprimento() << endl;
}