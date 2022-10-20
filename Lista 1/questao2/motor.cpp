#include <iomanip>
#include <iostream>
#include <string>
#include "motor.h"
using namespace std;

Motor::Motor(int cilindros, int potencia){
    setCilindros(cilindros);
    setPotencia(potencia);
}

void Motor::setCilindros(int cilindros){
    this->cilindros = cilindros;
}
int Motor::getCilindros(){
    return cilindros;
}
void Motor::setPotencia(int potencia){
    this->potencia = potencia;
}
int Motor::getPotencia(){
    return potencia;
}

void Motor::print(){
    cout << "Cilindro: " << getCilindros() << endl;
    cout << "Potencia: " << getPotencia() << endl;
}