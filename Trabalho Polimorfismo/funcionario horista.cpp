#include <iostream>
#include <string>
#include "funcionario horista.h"

FuncionarioHorista::FuncionarioHorista(string nome, string sobrenome, string documento, float salarioHora, float horasTrabalhadas) : Funcionario(nome, sobrenome, documento) {
    this->salarioHora = salarioHora;
    this->horasTrabalhadas = horasTrabalhadas;
}

float FuncionarioHorista::getSalarioHora() { return salarioHora; }
float FuncionarioHorista::getHorasTrabalhadas() { return horasTrabalhadas; }
void FuncionarioHorista::setSalarioHora(float salarioHora) { this->salarioHora = salarioHora; }
void FuncionarioHorista::setHorasTrabalhadas(float horasTrabalhadas) { this->horasTrabalhadas = horasTrabalhadas; }

float FuncionarioHorista::calculoRendimento() {
    if(getHorasTrabalhadas() <= 40) {
        return getSalarioHora() * getHorasTrabalhadas();
    } else {
        return (getSalarioHora() * 40) + ((getHorasTrabalhadas() - 40) * (getSalarioHora() * 1.5));
    }
}

void FuncionarioHorista::print() { 
    Funcionario::print();
    cout << "Salario por hora: " << getSalarioHora() << endl;
    cout << "Horas trabalhadas: " << getHorasTrabalhadas() << endl;
}