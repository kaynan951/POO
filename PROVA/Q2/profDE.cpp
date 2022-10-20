#include <iomanip>
#include <iostream>
#include <string>
#include "profDE.h"

ProfDE::ProfDE(string nome, string matricula, int idade, float salario) {
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
    this->salario = salario;
}

string ProfDE::getNome() {
    return this->nome;
}

string ProfDE::getMatricula() {
    return this->matricula;
}

int ProfDE::getIdade() {
    return this->idade;
}

float ProfDE::getSalario() {
    return this->salario;
}

void ProfDE::setNome(string nome) {
    this->nome = nome;
}

void ProfDE::setMatricula(string matricula) {
    this->matricula = matricula;
}

void ProfDE::setIdade(int idade) {
    this->idade = idade;
}

void ProfDE::setSalario(float salario) {
    this->salario = salario;
}
