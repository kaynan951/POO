#include <iomanip>
#include <iostream>
#include <string>
#include "carropasseio.h"
using namespace std;

CarroPasseio::CarroPasseio(int peso, int velMax, float preco, int cilindros, int potencia, string modelo, string cor):Veiculo(peso, velMax, preco), Motor(cilindros, potencia) {
    setModelo(modelo);
    setCor(cor);
}

void CarroPasseio::setModelo(string modelo){
    this->modelo = modelo;
}
void CarroPasseio::setCor(string cor){
    this->cor = cor;
}
string CarroPasseio::getModelo(){
    return modelo;
}
string CarroPasseio::getCor(){
    return cor;
}

void CarroPasseio::print(){
    Veiculo::print();
    Motor::print();
    cout << "Modelo: " << getModelo() << endl;
    cout << "Cor: " << getCor() << endl;
}
