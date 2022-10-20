#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Empregado {

private:
    string nome;
    string sobrenome;
    float salarioMen;

public:
    Empregado(string nome, string sobrenome, float salarioMen);

    void setNome(string);
    void setSobrenome(string);
    void setSalarioMen(float);

    string getNome();
    string getSobrenome();
    float getSalarioMen();

    void salarioAnual();
    void salarioAnual10();



};