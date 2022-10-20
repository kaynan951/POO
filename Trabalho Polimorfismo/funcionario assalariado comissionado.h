#ifndef FUNCIONARIOASSALARIADOCOMISSIONADO_H
#define FUNCIONARIOASSALARIADOCOMISSIONADO_H
#include <iostream>
#include <string>
#include "funcionario.h"
#include "funcionario comissionado.h"
using namespace std;

class FuncionarioAssalariadoComissionado:public FuncionarioComissionado{ 
private:
    float salario;

public:
    FuncionarioAssalariadoComissionado(string nome, string sobrenome, string documento, float vendas, float comissao, float salario);

    ~FuncionarioAssalariadoComissionado() {
        cout << "Objeto da classe funcionario assalariado comissionado destruido" << endl;
    }

    float getSalario();
    void setSalario(float salario);

    float calculoRendimento();
    void print();

};

#endif