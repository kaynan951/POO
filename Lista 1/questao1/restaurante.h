#ifndef RESTAURANTE_H_INCLUDED
#define RESTAURANTE_H_INCLUDED
#include <iomanip>
#include <string>
#include <iostream>
#include "empresa.h"
using namespace std;

class Restaurante : public Empresa {

private:
    string tipo;
    string precoMed;

public:
    Restaurante(string nome, string endereco, string cidade, string estado, string CEP, string telefone, string tipo, string precoMed);

    void setTipo(string tipo);
    string getTipo();
    void setPrecoMed(string precoMed);
    string getPrecoMed();

    void print();

};

#endif 