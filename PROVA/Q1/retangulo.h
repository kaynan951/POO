#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Retangulo {
private:
    float base;
    float altura;

public:
    Retangulo(float base, float altura);

    void setBase(float);
    float getBase();

    void setAltura(float);
    float getAltura();

    float calculaArea();
    float calculaPerimetro();    
    void print();

};


#endif