#include <iomanip>
#include <iostream>
#include <string>
#include "conta.h"

Conta::Conta(double saldo) {
    if(saldo > 0) {
        this -> saldo = saldo;
    }
    else {
        cout << "ERROR: Saldo inicial invalido" << endl;
        this -> saldo = 0;
    }
        
}

void Conta::setSaldo(double saldo) {
    if(saldo > 0) {
        this -> saldo = saldo;
    }
    else {
        cout << "ERROR: Saldo inicial invalido" << endl;
        this -> saldo = 0;
    }
}

double Conta::getSaldo() {
    return saldo;
}

void Conta::credito() {
    double x;
    
    cout << "Qual o valor que sera adicionado? ";    
    cin >> x;

    if(x > 0) {
        saldo += x;
    }
}

void Conta::debito() {
    double x;
    
    cout << "Qual o valor que sera retirado? "; 
    cin >> x;

    if(x > this -> saldo) {
        cout << "ERROR: Valor de retirada invalido" << endl;
    }
    else {
        saldo -= x;
    }
}