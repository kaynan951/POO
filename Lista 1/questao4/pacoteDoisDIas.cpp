#include <iomanip>
#include <iostream>
#include <string>
#include "pacoteDoisDias.h"

PacoteDoisDias::PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG, float taxaAdicional) : Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRementente, estadoRemetente, cepRemetente, peso, precoKG) {

    this->taxaAdicional = taxaAdicional;

}

void PacoteDoisDias::calculaCusto(double peso) {
    cout << "O custo do pacote é: " << peso * precoKG + taxaAdicional << endl;
}

//gets e sets
void PacoteDoisDias::setTaxaAdicional(float) {
    this->taxaAdicional = taxaAdicional;
}
float PacoteDoisDias::getTaxaAdicional() {
    return taxaAdicional;
}