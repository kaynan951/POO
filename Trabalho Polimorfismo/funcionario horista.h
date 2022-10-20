#ifndef FUNCIONARIOHORISTA_H
#define FUNCIONARIOHORISTA_H
#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class FuncionarioHorista:public Funcionario{
private:
    float salarioHora, horasTrabalhadas;

public:
    FuncionarioHorista(string nome, string sobrenome, string documento, float salarioHora, float horasTrabalhadas);
    
    ~FuncionarioHorista() {
        cout << "Objeto da classe funcionario horista destruido" << endl;
    }

    float getSalarioHora();
    float getHorasTrabalhadas();
    void setSalarioHora(float salarioHora);
    void setHorasTrabalhadas(float horasTrabalhadas);

    float calculoRendimento();
    void print();

};

#endif