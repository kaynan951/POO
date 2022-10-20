#include <iomanip>
#include <iostream>
#include <string>
#include "pacoteOverNight.h"

PacoteOverNight::PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG, float taxaAdicional) : Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRementente, estadoRemetente, cepRemetente, peso, precoKG) {

    this->taxaAdicional = taxaAdicional;

}

void PacoteOverNight::calculaCusto(double peso) {
    cout << "O custo do pacote é: " << peso * precoKG + taxaAdicional * peso << endl;
}

//gets e sets
void PacoteOverNight::setTaxaAdicional(float) {
    this->taxaAdicional = taxaAdicional;
}
float PacoteOverNight::getTaxaAdicional() {
    return taxaAdicional;
}
