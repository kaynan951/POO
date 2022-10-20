#ifndef PROFDE_H_INCLUDED
#define PROFDE_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ProfDE {
private:
    string nome;
    string matricula;
    int idade;
    float salario;

public:
    ProfDE(string nome, string matricula, int idade, float salario);

    string getNome();
    string getMatricula();
    int getIdade();
    float getSalario();

    void setNome(string nome);
    void setMatricula(string matricula);
    void setIdade(int idade);
    void setSalario(float salario);

};

#endif 
