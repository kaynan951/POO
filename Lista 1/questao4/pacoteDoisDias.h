#ifndef PACOTEDOISDIAS_H_INCLUDED
#define PACOTEDOISDIAS_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "pacote.h"
using namespace std;

class PacoteDoisDias : protected Pacote {

private:
    float taxaAdicional;
public:
    PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG, float taxaAdicional);

    void calculaCusto(double);
    //sets

    void setTaxaAdicional(float);
    float getTaxaAdicional();

};


#endif