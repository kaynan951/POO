#ifndef FUNCIONARIOASSALARIADO_H
#define FUNCIONARIOASSALARIADO_H
#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class FuncionarioAssalariado: public Funcionario {
private:
    float salarioSemanal;

public:
    FuncionarioAssalariado(string nome, string sobrenome, string documento, float salarioSemanal);
    
    ~FuncionarioAssalariado() {
        cout << "Objeto da classe funcionario assalariado destruido" << endl;
    }

    float getSalarioSemanal();
    void setSalarioSemanal(float salarioSemanal);

    float calculoRendimento();

    void print();

};

#endif 