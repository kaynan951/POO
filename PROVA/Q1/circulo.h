#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Circulo {

private:
    float raio;

public:
    Circulo(float raio);

    void setRaio(float);
    float getRaio();

    float calculaArea();
    float calculaPerimetro();
    void print();

};

#endif
