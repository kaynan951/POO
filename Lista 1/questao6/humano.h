#ifndef HUMANO_H_INCLUDED
#define HUMANO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Humano {
private:
    string nome;
    string sexo;
    int idade;
    string lingua;
    string etnia;

public:
    Humano(string nome, string Sexo, int idade, string lingua, string etnia);

    // Sets
    void setNome(string);
    void setSexo(string);
    void setIdade(int);
    void setLingua(string);
    void setEtnia(string);
    // Gets
    string getNome();
    string getSexo();
    int getIdade();
    string getLingua();
    string getEtnia();

};


#endif