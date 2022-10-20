#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Estudante.h"
using namespace std;

class Monitor : public Funcionario, Estudante
{
private:
    string disciplina;
    int horas;

public:
    string getdisciplina();
    void setdisciplina(string);
    int gethoras();
    void sethoras(int);
    Monitor();

    void print();
};