#include <iomanip>
#include <iostream>
#include <string>
#include "pacote.h"

Pacote::Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG) {

    setNomeDestinatario(nomeDestinatario);
    setEnderecoDestinatario(enderecoDestinatario);
    setCidadeDestinatario(cidadeDestinatario);
    setCepDestinatario(cepDestinatario);
    setNomeRemetente(nomeRemetente);
    setEnderecoRemetente(enderecoRemetente);
    setCidadeRementente(cidadeRementente);
    setEstadoRemetente(estadoRemetente);
    setCepRemetente(cepRemetente);
    setPeso(peso);
    setPrecoKG(precoKG);

    if(peso <= 0 || precoKG <= 0) {
        cout << "O valor nao pode ser menor que 0 irmão" << endl;
    }
}

void Pacote::calculaCusto(double peso) {
    cout << "O custo do pacote é: " << peso * precoKG << endl;
}
//SETS
void Pacote::setNomeDestinatario(string) {
    this->nomeDestinatario = nomeDestinatario;
}
void Pacote::setEnderecoDestinatario(string) {
    this->enderecoDestinatario = enderecoDestinatario;
}
void Pacote::setCidadeDestinatario(string) {
    this->cidadeDestinatario = cidadeDestinatario;
}
void Pacote::setCepDestinatario(string) {
    this->cepDestinatario = cepDestinatario;
}
void Pacote::setNomeRemetente(string) {
    this->nomeRemetente = nomeRemetente;
}
void Pacote::setEnderecoRemetente(string) {
    this->enderecoRemetente = enderecoRemetente;
}
void Pacote::setCidadeRementente(string) {
    this->cidadeRementente = cidadeRementente;
}
void Pacote::setEstadoRemetente(string) {
    this->estadoRemetente = estadoRemetente;
}
void Pacote::setCepRemetente(string) {
    this->cepRemetente = cepRemetente;
}
void Pacote::setPeso(float) {
    this->peso = peso;
}
void Pacote::setPrecoKG(float) {
    this->precoKG = precoKG;
}
//GETS
string Pacote::getNomeDestinatario() {
    return nomeDestinatario;
}
string Pacote::getEnderecoDestinatario() {
    return enderecoDestinatario;
}
string Pacote::getCidadeDestinatario() {
    return cidadeDestinatario;
}
string Pacote::getCepDestinatario() {
    return cepDestinatario;
}
string Pacote::getNomeRemetente() {
    return nomeRemetente;
}
string Pacote::getEnderecoRemetente() {
    return enderecoRemetente;
}
string Pacote::getCidadeRementente() {
    return cidadeRementente;
}
string Pacote::getEstadoRemetente() {
    return estadoRemetente;
}
string Pacote::getCepRemetente() {
    return cepRemetente;
}
float Pacote::getPeso() {
    return peso;
}
float Pacote::getPrecoKG() {
    return precoKG;
}





