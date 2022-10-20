#include <iomanip>
#include <iostream>
#include <string>
#include "empregado.h"
using namespace std;

Empregado::Empregado(string nome, string sobrenome, float salarioMen) {
    setNome(nome);
    setSobrenome(sobrenome);
    if(salarioMen > 0) setSalarioMen(salarioMen);
    else setSalarioMen(0);
}

void Empregado::setNome(string nome) {
    this->nome = nome;
}
void Empregado::setSobrenome(string sobrenome) {
    this->sobrenome = sobrenome;
}
void Empregado::setSalarioMen(float salarioMen) {
    this->salarioMen = salarioMen;
}

string Empregado::getNome(){
    return nome;
}
string Empregado::getSobrenome(){
    return sobrenome;
}
float Empregado::getSalarioMen(){
    return salarioMen;
}

void Empregado::salarioAnual(){
    cout << "Salario anual de " << getNome() << " " << getSobrenome() << ": R$" << getSalarioMen()*12 << endl;
}
void Empregado::salarioAnual10(){
    cout << "Salario anual de " << getNome() << " " << getSobrenome() << " com 10% de aumento: R$" << getSalarioMen()*12*1.1 << endl;
}
        
