#include <iomanip>
#include <iostream>
#include <string>
#include "numeroracional.h"

int main() {

    NumeroRacional *op1 = new NumeroRacional();
    op1->setNum(8);
    op1->setDenom(2);

    NumeroRacional *op2 = new NumeroRacional();
    op2->setNum(4);
    op2->setDenom(2);

    NumeroRacional *resultado1 = new NumeroRacional();
    *resultado1 = *op1 + *op2;

    NumeroRacional *resultado2 = new NumeroRacional();
    *resultado2 = *op1 - *op2;

    NumeroRacional *resultado3 = new NumeroRacional();
    *resultado3 = *op1 * *op2;

    cout << "soma: " << endl;
    resultado1->imprimir();
    cout << endl;

    cout << "subtracao: " << endl;
    resultado2->imprimir();
    cout << endl;

    cout << "multiplicacao: " << endl;
    resultado3->imprimir();
    cout << endl;

    return 0;
}