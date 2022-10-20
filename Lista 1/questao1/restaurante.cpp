#include <iomanip>
#include <string>
#include <iostream>
#include "restaurante.h"
using namespace std;

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string CEP, string telefone, string tipo, string precoMed) : Empresa(nome, endereco, cidade, estado, CEP, telefone) {
    setTipo(tipo);
    setPrecoMed(precoMed);
}

void Restaurante::setTipo(string tipo) {
    this->tipo = tipo;
}
string Restaurante::getTipo() {
    return tipo;
}
void Restaurante::setPrecoMed(string precoMed) {
    this->precoMed = precoMed;
}
string Restaurante::getPrecoMed() {
    return precoMed;
}

void Restaurante::print() {
    
    Empresa::print();
    cout << "Tipo: " << getTipo() << endl;
    cout << "Preco Medio: " << getPrecoMed() << endl;
}


