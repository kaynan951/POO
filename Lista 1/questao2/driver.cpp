#include <iomanip>
#include <iostream>
#include <string>
#include "carropasseio.h"
using namespace std;

int main() {
//int peso, int velMax, float preco, int cilindros, int potencia, string modelo, string cor
    CarroPasseio *corolla = new CarroPasseio(500, 300, 600, 8, 700, "Corolla 2022", "Prata");
    corolla->print();

    return 0;
}