#ifndef ESTACIONAMENTO_H_INCLUDED
#define ESTACIONAMENTO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Estacionamento {
private:
    string placa;
    string modelo;
    float horaEntrada;
    float horaSaida;

public:
    Estacionamento() = default;
    Estacionamento(string placa, string modelo);

    void setPlaca(string placa);
    void setModelo(string modelo);

    string getPlaca();
    string getModelo();

    void imprimirCarro();

    double custoHoras(int horas);

};

#endif 