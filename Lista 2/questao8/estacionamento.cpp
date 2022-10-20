#include <iomanip>
#include <iostream>
#include <string>
#include "estacionamento.h"

Estacionamento::Estacionamento(string placa, string modelo) {
    setPlaca(placa);
    setModelo(modelo);
}

void Estacionamento::setPlaca(string placa) {
    this->placa = placa;
}
void Estacionamento::setModelo(string modelo) { 
    this->modelo = modelo;
}

string Estacionamento::getPlaca() {
    return placa;
}
string Estacionamento::getModelo() {
    return modelo;
}

double Estacionamento::custoHoras(int horas) {
    return horas * 1.5;
}

void Estacionamento::imprimirCarro() {
    cout << "Placa: " << getPlaca() << endl;
    cout << "Modelo: " << getModelo() << endl;
}