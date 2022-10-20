#include <iomanip>
#include <iostream>
#include <string>
#include "tempo.h"
using namespace std;

int main() {

    Tempo *t = new Tempo(10, 30, 20);
    Tempo *t2 = new Tempo(12, 30, 20);

    t->imprimir();
    t->subtrai(t2);
    t->imprimir();
    t->soma(t2->getHora(), t2->getMinuto(), t2->getSegundo());
    t->imprimir();
    t->soma(t2);

return 0;
}