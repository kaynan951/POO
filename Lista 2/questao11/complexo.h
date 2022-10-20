#ifndef COMPLEXO_H_INCLUDED
#define COMPLEXO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//referenciado pelo exemplo do slide
class Complexo {
private:
    double real;
    double imaginary;
    
public:
    Complexo( double = 0.0, double = 0.0);

    Complexo operator + (const Complexo &) const;
    Complexo operator - (const Complexo &) const;
    Complexo operator * (const Complexo &) const;
    bool operator == (const Complexo &) const;
    bool operator != (const Complexo &) const;

    void imprimir() const;

};

#endif
