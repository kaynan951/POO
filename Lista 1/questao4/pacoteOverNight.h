#ifndef PACOTEOVERNIGHT_H_INCLUDED
#define PACOTEOVERNIGHT_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "pacote.h"
using namespace std;

class PacoteOverNight : protected Pacote { 
private:
    float taxaAdicional;
public:
    PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG, float taxaAdicional);

    void calculaCusto(double);

    //sets
    void setTaxaAdicional(float);
    float getTaxaAdicional();

};


#endif