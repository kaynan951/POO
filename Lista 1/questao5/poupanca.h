#ifndef POUPANCA_H_INCLUDED
#define POUPANCA_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "conta.h"
using namespace std;

class Poupanca : public Conta {

private:
    float rendimento;

public:
    
    Poupanca(double saldo, float rendimento);
    
    void setRendimento(float rendimento);
    
    float getRendimento();
    
    void calculaRendimento();
    
};

#endif