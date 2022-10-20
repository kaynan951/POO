#ifndef FUNCIONARIOCOMISSIONADO_H
#define FUNCIONARIOCOMISSIONADO_H
#include <iostream>
#include <string>
#include "funcionario.h"
using namespace std;

class FuncionarioComissionado:public Funcionario{
private:
    float vendas, comissao;

public:
    FuncionarioComissionado(string nome, string sobrenome, string documento, float vendas, float comissao);

    ~FuncionarioComissionado() {
        cout << "Objeto da classe funcionario comissionado destruido" << endl;
    }

    float getVendas();
    float getComissao();
    void setVendas(float vendas);
    void setComissao(float comissao);

    float calculoRendimento();
    void print();

};

#endif