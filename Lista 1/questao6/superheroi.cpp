#include <iomanip>
#include <iostream>
#include <string>
#include "superheroi.h"

SuperHeroi::SuperHeroi(string nome, string sexo, int idade, string lingua, string etnia, string nomeInseto, bool venenoso, bool alado, bool ferrao, string codinome, string trauma, string poderes) : Humano(nome, sexo, idade, lingua, etnia) , Inseto(nomeInseto, venenoso, alado, ferrao) {
    setCodinome(codinome);
    setTrauma(trauma);
    setPoderes(poderes);
}

// Sets
void SuperHeroi::setCodinome(string codinome) {
    this->codinome = codinome;
}
void SuperHeroi::setTrauma(string trauma) {
    this->trauma = trauma;
}
void SuperHeroi::setPoderes(string poderes) {
    this->poderes = poderes;
}
// Gets

string SuperHeroi::getCodinome() {
    return codinome;
}
string SuperHeroi::getTrauma() {
    return trauma;
}
string SuperHeroi::getPoderes() {
    return poderes;
}

void SuperHeroi::printSuperHeroi() {
    cout << "Nome: " << getNome() << endl;
    cout << "Sexo: " << getSexo() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Lingua: " << getLingua() << endl;
    cout << "Etnia: " << getEtnia() << endl;
    cout << "Inseto: " << getNomeInseto() << endl;
    cout << "Venenoso: " << getVenenoso() << endl;
    cout << "Alado: " << getAlado() << endl;
    cout << "Ferrao: " << getFerrao() << endl;
    cout << "Codinome: " << getCodinome() << endl;
    cout << "Trauma: " << getTrauma() << endl;
    cout << "Poderes: " << getPoderes() << endl;
}



