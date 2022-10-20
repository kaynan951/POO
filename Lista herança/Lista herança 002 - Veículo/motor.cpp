#include<iostream>
#include"Motor.h"
using namespace std;


int Motor::getnum_cilindros(){
    return num_cilindros;
};

float Motor::getpotencia(){
    return potencia;
};


void Motor::setpotencia(float potencia){
    this->potencia = potencia;
};

void Motor::setnum_cilindros(int num_cilindros){
    this->num_cilindros = num_cilindros;
};

// construtores

Motor::Motor(){};
Motor::Motor(float peso, float velmax, float preco,int num_cilindros,float potencia)
:Veiculo(peso,velmax,preco){
    setnum_cilindros(num_cilindros);
    setpotencia(potencia);
}


void Motor::print_motor(){
    print();
    cout << endl << "As caracteristicas do Motor sao" << endl;
    cout << "O numero de cilindros nesse carro é: " << getnum_cilindros() << endl;
    cout << "A sua potencia e: " << getpotencia() << endl << endl;
}