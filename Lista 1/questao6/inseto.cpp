#include <iomanip>
#include <iostream>
#include <string>
#include "inseto.h"

Inseto::Inseto(string nomeInseto, bool venenoso, bool alado, bool ferrao) {
    setNomeInseto(nomeInseto);
    setVenenoso(venenoso);
    setAlado(alado);
    setFerrao(ferrao);
}

// Sets
void Inseto::setNomeInseto(string nomeInseto) {
    this->nomeInseto = nomeInseto;
}
void Inseto::setVenenoso(bool venenoso) {
    this->venenoso = venenoso;
}
void Inseto::setAlado(bool alado) {
    this->alado = alado;
}
void Inseto::setFerrao(bool ferrao) {
    this->ferrao = ferrao;
}

// Gets

string Inseto::getNomeInseto() {
    return nomeInseto;
}
bool Inseto::getVenenoso() {
    return venenoso;
}
bool Inseto::getAlado() {
    return alado;
}
bool Inseto::getFerrao() {
    return ferrao;
}

