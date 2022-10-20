#include <iomanip>
#include <iostream>
#include <string>
#include "professor.h"

Professor::Professor(string nome, string matricula, int idade) : ProfDE(nome, matricula, idade, 0), ProfHora(nome, matricula, idade, 0, 0) {
    this->nome = nome;
    this->matricula = matricula;
    this->idade = idade;
}
// gets
string Professor::getNome() {
    return this->nome;
}

string Professor::getMatricula() {
    return this->matricula;
}

int Professor::getIdade() {
    return this->idade;
}

// sets
void Professor::setNome(string nome) {
    this->nome = nome;
}

void Professor::setMatricula(string matricula) {
    this->matricula = matricula;
}

void Professor::setIdade(int idade) {
    this->idade = idade;
}
