#ifndef INTEIROS_H_INCLUDED
#define INTEIROS_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Inteiros {
private:
    int num;
    int denom;

public:
    Inteiros() = default;
    Inteiros(int num, int denom);

    void setNum(int num);
    void setDenom(int denom);

    int getNum();
    int getDenom();

    Inteiros operator+(int aux);
    Inteiros operator-(int aux);
    Inteiros operator*(int aux);
    Inteiros operator/(int aux);

    void imprimir();
};

#endif