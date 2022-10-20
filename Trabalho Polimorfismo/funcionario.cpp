#include <iostream>
#include <string>
#include "funcionario.h"

Funcionario::Funcionario(string nome, string sobrenome, string documento) {
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->documento = documento;
}

string Funcionario::getNome() { return nome; }
string Funcionario::getSobrenome() { return sobrenome; }
string Funcionario::getDocumento() { return documento; }
void Funcionario::setNome(string nome) { this->nome = nome; }
void Funcionario::setSobrenome(string sobrenome) { this->sobrenome = sobrenome; }
void Funcionario::setDocumento(string documento) { this->documento = documento; }

float Funcionario::calculoRendimento(){
    return 0;
}

void Funcionario::print() {
    cout << "Nome: " << getNome() << endl;
    cout << "Sobrenome: " << getSobrenome() << endl;
    cout << "Documento: " << getDocumento() << endl;
}