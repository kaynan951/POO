#include <iostream>
#include <string>
#include "funcionario assalariado comissionado.h"

FuncionarioAssalariadoComissionado::FuncionarioAssalariadoComissionado(string nome, string sobrenome, string documento, float vendas, float comissao, float salario) : FuncionarioComissionado(nome, sobrenome, documento, vendas, comissao) {
    this->salario = salario;
}

float FuncionarioAssalariadoComissionado::getSalario() { return salario; }
void FuncionarioAssalariadoComissionado::setSalario(float salario) { this->salario = salario; }

float FuncionarioAssalariadoComissionado::calculoRendimento() {
    return FuncionarioComissionado::calculoRendimento() + getSalario();
}

void FuncionarioAssalariadoComissionado::print() {
    FuncionarioComissionado::print();
    cout << "Salario: " << getSalario() << endl;
}