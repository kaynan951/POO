#include <iomanip>
#include <iostream>
#include <string>
#include "inteiros.h"

int main() {

    Inteiros *op1 = new Inteiros();
    op1->setNum(10);
    op1->setDenom(2);

    Inteiros *resultado1 = new Inteiros();
    *resultado1 = *op1 + 10;
    
    cout << "soma: " << endl;
    resultado1->imprimir();
    cout << endl;

    Inteiros *resultado2 = new Inteiros();
    *resultado2 = *op1 * 10;

    cout << "multiplicacao: " << endl;
    resultado2->imprimir();
    cout << endl;

    return 0;
}