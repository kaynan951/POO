#include "CarroPasseio.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    float peso = 1200; 
    float velocidade_maxima = 60; 
    float preco = 3.5;
    int numero_cilindros = 6;
    float potencia = 1200;
    string modelo = "Corsa",
           cor = "amarelo";

    CarroPasseio *car = new CarroPasseio(peso,velocidade_maxima,preco,numero_cilindros,potencia,cor,modelo);
    car -> print_carropasseio();

}