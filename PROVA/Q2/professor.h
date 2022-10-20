#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "profDE.h"
#include "profHora.h"
using namespace std;

class Professor : public ProfDE, public ProfHora {

private:
    string nome;
    string matricula;
    int idade;

public:
    Professor(string nome, string matricula, int idade);

    string getNome();
    string getMatricula();
    int getIdade();

    void setNome(string nome);
    void setMatricula(string matricula);
    void setIdade(int idade);
    
};

#endif