#ifndef NUMERORACIONAL_H_INCLUDED
#define NUMERORACIONAL_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class NumeroRacional {
private:
    int num;
    int denom;

public:
    NumeroRacional() = default;
    NumeroRacional(int num, int denom);

    void setNum(int num);
    void setDenom(int denom);

    int getNum();
    int getDenom();

    NumeroRacional operator+(NumeroRacional aux);
    NumeroRacional operator-(NumeroRacional aux);
    NumeroRacional operator*(NumeroRacional aux);
    NumeroRacional operator/(NumeroRacional aux);
    bool operator<=(NumeroRacional aux);
    bool operator>=(NumeroRacional aux);
    bool operator==(NumeroRacional aux);
    bool operator!=(NumeroRacional aux);

    void imprimir();

};

#endif 