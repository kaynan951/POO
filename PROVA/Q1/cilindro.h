#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "circulo.h"
#include "retangulo.h"
using namespace std;

class Cilindro: public Circulo, public Retangulo {
public:

    Cilindro(float base, float altura, float raio);

    float calculaArea();
    float calculaVolume();
    void print();
};

#endif