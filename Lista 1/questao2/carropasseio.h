#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H
#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"
#include "motor.h"

class CarroPasseio : public Veiculo, Motor {

private:
    string modelo;
    string cor;
    
public:
    CarroPasseio(int peso, int velMax, float preco, int cilindros, int potencia, string modelo, string cor);

    void setModelo(string);
    string getModelo();
    void setCor(string);
    string getCor();

    void print();

};

#endif