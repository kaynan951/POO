#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"

Veiculo::Veiculo(string nome, int peso, int potencia) {

    this->nome = nome;
    this->peso = peso;

    if(potencia < 0) {
        cout << "Potencia invalida" << endl;
        this->potencia = 0;
    } else {
        this->potencia = potencia;
    }

}
// gets
string Veiculo::getNome() {
    return nome;
}

int Veiculo::getPeso() {
    return peso;
}

int Veiculo::getPotencia() {
    return potencia;
}

// sets
void Veiculo::setNome(string nome) {
    this->nome = nome;
}

void Veiculo::setPeso(int peso) {
    this->peso = peso;
}

void Veiculo::setPotencia(int potencia) {
    this->potencia = potencia;
}

void Veiculo::Print() {
    cout << "Nome: " << getNome() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Potencia: " << getPotencia() << endl;
}