#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Conta {
private:
    double saldo;
public:

    Conta(double saldo);

    void setSaldo(double);
    double getSaldo();

    void credito();
    void debito();

};

#endif