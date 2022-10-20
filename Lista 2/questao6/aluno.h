#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    int serie;
    string grau;

public:
    // construtor
    Aluno() = default;
    // destrutor
    ~Aluno();

    void setNome(string nome);
    void setSerie(int serie);
    void setGrau(string grau);

    string getNome();
    int getSerie();
    string getGrau();

    void getContAluno();

};

#endif