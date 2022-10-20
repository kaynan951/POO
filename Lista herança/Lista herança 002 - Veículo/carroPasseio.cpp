#include "CarroPasseio.h"
#include<iostream>
#include<string>
using namespace std;

// construtores
CarroPasseio::CarroPasseio(float peso, float velmax, float preco, int num_cilindros, float potencia, string cor, string modelo):
Motor(peso,velmax,preco,num_cilindros,potencia){
    setcor(cor);
    setmodelo(modelo);
};

CarroPasseio::CarroPasseio(){};


string CarroPasseio::getcor(){
    return cor;
};

string CarroPasseio::getmodelo(){
    return modelo;
};


void CarroPasseio::setcor(string cor){
    this->cor = cor;
};

void CarroPasseio::setmodelo(string modelo){
    this->modelo = modelo;
};

void CarroPasseio::print_carropasseio(){
    print_motor();
    cout << "caracteristicas do carro de passeio são:" << endl;
    cout << "A cor: " << getcor() << endl;
    cout << "O modelo: " << getmodelo() << endl;
}