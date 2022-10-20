#include <iostream>
#include <string>
#include "funcionario comissionado.h"

FuncionarioComissionado::FuncionarioComissionado(string nome, string sobrenome, string documento, float vendas, float comissao) : Funcionario(nome, sobrenome, documento) {
    this->vendas = vendas;
    this->comissao = comissao;
}

float FuncionarioComissionado::getVendas() { return vendas; }
float FuncionarioComissionado::getComissao() { return comissao; }
void FuncionarioComissionado::setVendas(float vendas) { this->vendas = vendas; }
void FuncionarioComissionado::setComissao(float comissao) { this->comissao = comissao; }

float  FuncionarioComissionado::calculoRendimento() {
    return getVendas() * getComissao();
}

void  FuncionarioComissionado::print() {
    Funcionario::print();
    cout << "Vendas: " << getVendas() << endl;
    cout << "Comissao: " << getComissao() << endl;
}