#include <iomanip>
#include <iostream>
#include <string>
#include "veiculoutilitario.h"

int main() {

    VeiculoUtilitario *v1 = new VeiculoUtilitario("Corolla", 1500, 600, 5, 300);
    VeiculoUtilitario *v2 = new VeiculoUtilitario("BMW", 1250, 700, 2, 250);

    v1->Print();
    cout << endl;
    v2->Print();

    return 0;

}