#include <iomanip>
#include <iostream>
#include <string>
#include "inteiros.h"

Inteiros::Inteiros(int num, int denom) {
    this->num = num;

    if(denom <= 0) {
        cout << "denominador menor igual a zero, operação indisponivel, sinto muito thigas" << endl;
    }else {
       this->denom = denom;
    }
}

// GETS E SETS

void Inteiros::setNum(int num) {
    this->num = num;
}
void Inteiros::setDenom(int denom) {
    this->denom = denom;
}

int Inteiros::getNum() {
    return num;
}
int Inteiros::getDenom() {

    return denom;
}

// OPERADORES ARITMETICOS

Inteiros Inteiros::operator + (int aux) {
Inteiros resultado = Inteiros();

    if (this->denom == 1) {
        resultado.num = this->num + aux;
        resultado.denom = this->denom;
    }
    else {
        resultado.num = (this->num * 1) + (this->denom * aux);
        resultado.denom = this->denom * 1;
    }
    return resultado;
}

Inteiros Inteiros::operator - (int aux) {
Inteiros resultado = Inteiros();

    if (this->denom == 1) {
        resultado.num = this->num - aux;
        resultado.denom = this->denom;
    }
    else {
        resultado.num = (this->num * 1) - (this->denom * aux);
        resultado.denom = this->denom * 1;
    }
    return resultado;
}

Inteiros Inteiros::operator * (int aux){
Inteiros resultado = Inteiros();

    resultado.num = this->num * aux;
    resultado.denom = this->denom * 1;
    
    return resultado;
}

Inteiros Inteiros::operator / (int aux){
Inteiros resultado = Inteiros();

    resultado.num = this->num * 1;
    resultado.denom = this->denom * aux;
    
    return resultado;
}

void Inteiros::imprimir() {

    cout << "numerador: " << this->num << endl;
    cout << "denominador: " << this->denom << endl;

}