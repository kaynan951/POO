#ifndef SUPERHEROI_H_INCLUDED
#define SUPERHEROI_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
#include "humano.h"
#include "inseto.h"
using namespace std;

class SuperHeroi : private Humano , Inseto {
private:
    string codinome;
    string trauma;
    string poderes;

public:
    SuperHeroi(string nome, string sexo, int idade, string lingua, string etnia, string nomeInseto, bool venenoso, bool alado, bool ferrao, string codinome, string trauma, string poderes);

    // Sets
    void setCodinome(string);
    void setTrauma(string);
    void setPoderes(string);
    // Gets
    string getCodinome();
    string getTrauma();
    string getPoderes();

    void printSuperHeroi();

};

#endif