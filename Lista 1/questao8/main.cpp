
#include<iostream>
#include<string>
#include"veiculoAnfi.h"
using namespace std;

int main(){

    VeiculoAnfi* an = new VeiculoAnfi("novo", 1000, 2022, "K4YN4N2022", 250, 5, "RENAULT", 50, 5, "RAPIDO", 2, 500);

    an->print();
}