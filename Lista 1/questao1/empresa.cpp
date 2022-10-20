#include <iomanip>
#include <string>
#include <iostream>
#include "empresa.h"
using namespace std;


Empresa::Empresa(string nome, string endereco, string cidade, string estado, string CEP, string telefone) {
    this->nome = nome;
    this->endereco = endereco;
    this->cidade = cidade;
    this->estado = estado;
    this->CEP = CEP;
    this->telefone = telefone;
}

void Empresa::setNome(string nome) {
    this->nome = nome;
}
string Empresa::getNome() {
    return nome;
}
void Empresa::setEndereco(string endereco) {
    this->endereco = endereco;
}
string Empresa::getEndereco() {
    return endereco;
}
void Empresa::setCidade(string cidade) {
    this->cidade = cidade;
}
string Empresa::getCidade() {
    return cidade;
}
void Empresa::setEstado(string estado) {
    this->estado = estado;
}
string Empresa::getEstado() {
    return estado;
}
void Empresa::setCEP(string CEP) {
    this->CEP = CEP;
}
string Empresa::getCEP() {
    return CEP;
}
void Empresa::setTelefone(string telefone) {
    this->telefone = telefone;
}
string Empresa::getTelefone() {
    return telefone;
}

void Empresa::print() {
    cout << "Nome: " << getNome() << endl;
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Cidade: " << getCidade() << endl;
    cout << "Estado: " << getEstado() << endl;
    cout << "CEP: " << getCEP() << endl;
    cout << "Telefone: " << getTelefone() << endl;
}


