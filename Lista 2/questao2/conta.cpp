#include <iostream>
using namespace std;

#include "conta.h"

Conta::Conta(double x){
    if(x >= 0)
        this->saldo = x;
    else{
        cout << "Error: valor do saldo tem que ser positivo" << std::endl;
        this->saldo = 0;
    }
}

double Conta::getsaldo(){
    return this->saldo;
}

void Conta::Credito(){
    double x;
    
    cout << "Qual o valor que sera adicionado? ";    
    cin >> x;

    this->saldo += x;
}

void Conta::Debito(){
    double x;
    
    cout << "Qual o valor que sera retirado? "; 
    cin >> x;

    if(x > this->saldo){
        cout << "O valor retirado nao pode ser maior que o saldo atual" << endl;
        return;
    }

    this->saldo -= x;
}