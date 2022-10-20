#ifndef PROFHORA_H_INCLUDED
#define PROFHORA_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class ProfHora {
private:
    string nome;
    string matricula;
    int idade;
    int totalhora;
    float salariohora;

public:
    ProfHora(string nome, string matricula, int idade, int totalhora, float salariohora);

    string getNome();
    string getMatricula();
    int getIdade();
    int getTotalHora();
    float getSalarioHora();

    void setNome(string nome);
    void setMatricula(string matricula);
    void setIdade(int idade);
    void setTotalHora(int totalhora);
    void setSalarioHora(float salariohora);

};

#endif