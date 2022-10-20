#include "Motor.h"
#include <iostream>
using namespace std;

class Caminhao : public Motor, Veiculo
{
private:
    float altura;
    float tonelada;
    float comprimento;

public:
    
    float getaltura();
    float gettonelada();
    float getcomprimento();
    
    void setaltura(float altura);
    void settonelada(float tonelada);
    void setcomprimento(float comprimento);

    // construtores
    Caminhao(float peso, float velmax, float preco, int num_cilindros, float potencia, float altura, float tonelada, float comprimento);

    void print_caminhao();
};