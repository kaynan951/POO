#ifndef TEMPO_H_INCLUDED
#define TEMPO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Tempo {
private:
    int hora;
    int minuto;
    int segundo;

public:
    // construtores
    Tempo ();
    Tempo (int hora, int minuto, int segundo);

    void setHora(int hora);
    void setMinuto(int minuto);
    void setSegundo(int segundo);

    int getHora();
    int getMinuto();
    int getSegundo();

    void imprimir();

    void subtrai(Tempo *tempo);
    void soma(int hora, int minuto, int segundo);
    Tempo soma(Tempo *tempo);

};



#endif