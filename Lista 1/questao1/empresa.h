#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class Empresa {

private:
    string nome;
    string endereco;
    string cidade;
    string estado;
    string CEP;
    string telefone;

public:
    Empresa() = default;
    Empresa(string nome, string endereco, string cidade, string estado, string CEP, string telefone);

    void setNome(string nome);
    string getNome();
    void setEndereco(string endereco);
    string getEndereco();
    void setCidade(string cidade);
    string getCidade();
    void setEstado(string estado);
    string getEstado();
    void setCEP(string CEP);
    string getCEP();
    void setTelefone(string telefone);
    string getTelefone();

    void print();
};


#endif 

