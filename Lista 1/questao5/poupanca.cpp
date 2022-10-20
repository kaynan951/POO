#include <iomanip>
#include <iostream>
#include <string>
#include "poupanca.h"

Poupanca::Poupanca(double saldo, float rendimento) : Conta(saldo) {
    
    if(rendimento > 0) {
        this -> rendimento = rendimento;
    }
    else {
        cout << "ERROR: Rendimento invalido" << endl;
        this -> rendimento = 0;
    }
}

void Poupanca::setRendimento(float rendimento) {
    if(rendimento > 0) {
        this -> rendimento = rendimento;
    }
    else {
        cout << "ERROR: Rendimento invalido" << endl;
        this -> rendimento = 0;
    }
}

float Poupanca::getRendimento() {
    return rendimento;    
}

void Poupanca::calculaRendimento() {
    double x;
    x = getSaldo() * rendimento;
    setSaldo(getSaldo() + x);
}