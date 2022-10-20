#include <iomanip>
#include <iostream>
#include <string>
#include "empregado.h"
using namespace std;

int main() {

    string nomezin;
    string sobrenomezin;
    float salario;

    cout << "Digite o nome do empregado: ";
    getline(cin, nomezin);
    cout << "Digite o sobrenome do empregado: ";
    getline(cin, sobrenomezin);
    cout << "Digite o salario mensal do empregado: ";
    cin >> salario;

    Empregado *e = new Empregado(nomezin, sobrenomezin, salario);
    e-> salarioAnual();
    e-> salarioAnual10();
}