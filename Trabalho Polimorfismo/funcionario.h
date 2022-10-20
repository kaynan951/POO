#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome;
    string sobrenome;
    string documento;
public:
    Funcionario(string nome, string sobrenome, string documento);
    virtual ~Funcionario() {
        cout << "Objeto da classe funcionario destruido" << endl;
    }

    string getNome();
    string getSobrenome();
    string getDocumento();
    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setDocumento(string documento);

    virtual float calculoRendimento() = 0;

    virtual void print();
};

#endif