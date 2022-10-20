#include <iomanip>
#include <iostream>
#include <string>
#include "contacorrente.h"
#include "poupanca.h"

int main() {
    ContaCorrente cc(1000, 0.01);
    Poupanca p(1000, 0.01);
    cc.calculaTaxa();
    p.calculaRendimento();
    cout << "Saldo da conta corrente: " << cc.getSaldo() << endl;
    cout << "Saldo da poupanca: " << p.getSaldo() << endl;
    return 0;
}