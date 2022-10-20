#include <iomanip>
#include <string>
#include <iostream>
#include "restaurante.h"
using namespace std;

int main() {

    Restaurante r1("Restaurante 1", "Rua 1", "Cidade 1", "Estado 1", "CEP 1", "Telefone 1", "Tipo 1", "Preco Medio 1");
    Restaurante *r = new Restaurante("Restaurante 1", "Rua 1", "Cidade 1", "Estado 1", "CEP 1", "Telefone 1", "Tipo 1", "Preco Medio 1");
    r1.print();

    return 0;
}