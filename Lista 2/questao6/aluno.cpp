#include <iomanip>
#include <iostream>
#include <string>
#include "aluno.h"

Aluno::~Aluno() {
    cout << "Aluno destruido" << endl;
}

static int ContAluno = 0;

void Aluno::setNome(string nome) {
    this->nome = nome;
    ContAluno++;
}
void Aluno::setSerie(int serie) {
    this->serie = serie;
}
void Aluno::setGrau(string grau) {
    this->grau = grau;
}

string Aluno::getNome() {
    return this-> nome;
}
int Aluno::getSerie() {
    return this-> serie;
}
string Aluno::getGrau() {
    return this-> grau;
}

void Aluno::getContAluno() {
    cout << "Numero de alunos: " << ContAluno << endl;
}