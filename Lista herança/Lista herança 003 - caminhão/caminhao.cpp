#include "Caminhao.h"
#include <iostream>
using namespace std;

// construtores
Caminhao::Caminhao(float peso, float velmax, float preco, int num_cilindros, float potencia, float altura, float tonelada, float comprimento)
    : Motor(peso, velmax, preco, num_cilindros, potencia)
{
    setaltura(altura);
    settonelada(tonelada);
    setcomprimento(comprimento);
};


void Caminhao::setaltura(float altura)
{
    this->altura = altura;
};

void Caminhao::settonelada(float tonelada)
{
    this->tonelada = tonelada;
};

void Caminhao::setcomprimento(float comprimento)
{
    this->comprimento = comprimento;
};



float Caminhao::getaltura()
{
    return altura;
};

float Caminhao::gettonelada()
{
    return tonelada;
};

float Caminhao::getcomprimento()
{
    return comprimento;
};


void Caminhao::print_caminhao()
{
    print_motor();
    cout << "As caracteristicas do caminhao" << endl;
    cout << "A altura: " << getaltura() << endl;
    cout << "As toneladas: " << gettonelada() << endl;
    cout << "O comprimento: " << getcomprimento() << endl;
}