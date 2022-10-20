#include <iomanip>
#include <iostream>
#include <string>
#include "profHora.h"

ProfHora::ProfHora(string nome, string matricula, int idade, int totalhora, float salariohora) {
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
    this->totalhora = totalhora;
    this->salariohora = salariohora;
}

// gets
string ProfHora::getNome() {
    return this->nome;
}

string ProfHora::getMatricula() {
    return this->matricula;
}

int ProfHora::getIdade() {
    return this->idade;
}

int ProfHora::getTotalHora() {
    return this->totalhora;
}

float ProfHora::getSalarioHora() {
    return this->salariohora;
}

// sets
void ProfHora::setNome(string nome) {
    this->nome = nome;
}

void ProfHora::setMatricula(string matricula) {
    this->matricula = matricula;
}

void ProfHora::setIdade(int idade) {
    this->idade = idade;
}

void ProfHora::setTotalHora(int totalhora) {
    this->totalhora = totalhora;
}

void ProfHora::setSalarioHora(float salariohora) {
    this->salariohora = salariohora;
}
