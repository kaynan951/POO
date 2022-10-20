#include<iostream>
#include"Caminhao.h"
using namespace std;

int main(){
    float peso = 1200;
    float velocidade_maxima = 60;
    float preco = 3.0;
    int numero_cilindros = 6;
    float potencia = 1200;
    float altura = 11, 
          tonelada = 8, 
          comprimento = 22;

    Caminhao *cam = new Caminhao(peso,velocidade_maxima,preco,numero_cilindros,potencia,altura,tonelada,comprimento);

    cam->print_caminhao();
}