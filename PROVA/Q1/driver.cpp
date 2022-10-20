#include <iomanip>
#include <iostream>
#include <string>
#include "cilindro.h"
using namespace std;

int main() {

    Cilindro *c = new Cilindro(5, 4, 8);
    c->print();

}