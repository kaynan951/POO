#include <iomanip>
#include <iostream>
#include <string>
#include "caminhao.h"
using namespace std;

int main() {

    Caminhao *c1 = new Caminhao(1000, 100, 1000, 4, 100, 100, 100, 100);
    c1->print();
    return 0;
    
}