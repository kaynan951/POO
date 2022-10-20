#ifndef CAMINHAO_H_INCLUDED
#define CAMINHAO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "../questao2/veiculo.h"
#include "../questao2/motor.h"
using namespace std;

class Caminhao : public Veiculo, Motor {
private:
    int toneladas;
    float alturaMax;
    float comprimento;

public:
    Caminhao(int peso, int velMax, float preco, int cilindros, int potencia, int toneladas, float alturaMax, float comprimento);

    void setToneladas(int toneladas);
    void setAlturaMax(float alturaMax);
    void setComprimento(float comprimento);
    int getToneladas();
    float getAlturaMax();
    float getComprimento();
    
    void print();

};

#endif