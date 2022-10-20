#include <iomanip>
#include <iostream>
#include <string>
#include "data.h"
using namespace std;

int main() {

    int a,b,c;
    cin >> a >> b >> c;

    Data *d = new Data(a, b, c);
    d->print();
    d->calculeDias();
    d->calculeDias("fevereiro");

}