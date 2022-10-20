#include <iostream>
#include <string>
#include "funcionario assalariado.h"

FuncionarioAssalariado::FuncionarioAssalariado(string nome, string sobrenome, string documento, float salarioSemanal) : Funcionario(nome, sobrenome, documento) {
    this->salarioSemanal = salarioSemanal;
}


float FuncionarioAssalariado::getSalarioSemanal() { return salarioSemanal; }
void FuncionarioAssalariado::setSalarioSemanal(float salarioSemanal) { this->salarioSemanal = salarioSemanal; }

float FuncionarioAssalariado::calculoRendimento() {
    return getSalarioSemanal();
}

void FuncionarioAssalariado::print() {
    Funcionario::print();
    cout << "Salario semanal: " << getSalarioSemanal() << endl;
}