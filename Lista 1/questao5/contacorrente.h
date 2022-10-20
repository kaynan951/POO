#ifndef CONTACORRENTE_H_INCLUDED
#define CONTACORRENTE_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "conta.h"
using namespace std;

class ContaCorrente : public Conta {

private:
    float taxa;

public:
        
    ContaCorrente(double saldo, float taxa);
        
    void setTaxa(float taxa);
        
    float getTaxa();
        
    void calculaTaxa();
        
};

#endif