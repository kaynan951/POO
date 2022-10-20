#include <iomanip>
#include <iostream>
#include <string>
#include "contacorrente.h"

ContaCorrente::ContaCorrente(double saldo, float taxa) : Conta(saldo) {
    
    if(taxa > 0) {
        this -> taxa = taxa;
    }
    else {
        cout << "ERROR: Taxa invalida" << endl;
        this -> taxa = 0;
    }
}

void ContaCorrente::setTaxa(float taxa) {
    if(taxa > 0) {
        this -> taxa = taxa;
    }
    else {
        cout << "ERROR: Taxa invalida" << endl;
        this -> taxa = 0;
    }
}

float ContaCorrente::getTaxa() {
    return taxa;    
}

void ContaCorrente::calculaTaxa() {
    double x;
    x = getSaldo() * taxa;
    setSaldo(getSaldo() - x);
}