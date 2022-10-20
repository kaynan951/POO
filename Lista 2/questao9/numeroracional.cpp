#include <iomanip>
#include <iostream>
#include <string>
#include "numeroracional.h"

NumeroRacional::NumeroRacional(int num, int denom) {
    this->num = num;

    if(denom <= 0) {
        cout << "denominador igual a zero, nao e possivel criar o numero racional" << endl;
    }else {
       this->denom = denom;
    }
}
// GETS E SETS
void NumeroRacional::setNum(int num) {
    this->num = num;
}
void NumeroRacional::setDenom(int denom) {
    this->denom = denom;
}

int NumeroRacional::getNum() {
    return num;
}
int NumeroRacional::getDenom() {
    return denom;
}

// OPERADORES
NumeroRacional NumeroRacional::operator + (NumeroRacional aux) {
NumeroRacional resultado = NumeroRacional();

    if (this->denom == aux.denom) {
        resultado.num = this->num + aux.num;
        resultado.denom = this->denom;
    } 
    else {
        resultado.num = (this->num * aux.denom) + (this->denom * aux.num);
        resultado.denom = this->denom * aux.denom;
    }
    return resultado;
}

NumeroRacional NumeroRacional::operator - (NumeroRacional aux) {
NumeroRacional resultado = NumeroRacional();

    if (this->denom == aux.denom) {
        resultado.num = this->num - aux.num;
        resultado.denom = this->denom;
    }
    else {
        resultado.num = (this->num * aux.denom) - (this->denom * aux.num);
        resultado.denom = this->denom * aux.denom;
    }
    return resultado;
}

NumeroRacional NumeroRacional::operator * (NumeroRacional aux){
NumeroRacional resultado = NumeroRacional();

    resultado.num = this->num * aux.num;
    resultado.denom = this->denom * aux.denom;    
    return resultado;
}

NumeroRacional NumeroRacional::operator / (NumeroRacional aux){
NumeroRacional resultado = NumeroRacional();

    resultado.num = this->num * aux.denom;
    resultado.denom = this->denom * aux.num;    
    return resultado;
}

// OPERADORES DE COMPARACAO
bool NumeroRacional::operator <= (NumeroRacional aux){

    if ((this->num / this->denom) <= (aux.num / aux.denom)) { 
        return true;
    }
    else { 
        return false; 
    }

}

bool NumeroRacional::operator >= (NumeroRacional aux){

    if ((this->num / this->denom) >= (aux.num / aux.denom)) { 
        return true; }
    else { 
        return false; 
    }
}

bool NumeroRacional::operator == (NumeroRacional aux){

    if ((this->num / this->denom) == (aux.num / aux.denom)) { 
        return true; }
    else { 
        return false; 
    }
}

bool NumeroRacional::operator != (NumeroRacional aux){

    if ((this->num / this->denom) != (aux.num / aux.denom)) { 
        return true; 
    }
    else { 
        return false;
    }
}

void NumeroRacional::imprimir() {

    cout << "numerador: " << this->num << endl;
    cout << "denominador: " << this->denom << endl;
}