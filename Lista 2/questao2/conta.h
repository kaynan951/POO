#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <iostream>
using namespace std;

class Conta{
    
public:
        double saldo;
        Conta(double);
        double getsaldo();
        void Credito();
        void Debito();
};

#endif