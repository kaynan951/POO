#include <iostream>
#include "Veiculo.h"
using namespace std;

class Motor : public Veiculo
{
private:
    int num_cilindros;
    float potencia;
public:
    
    int getnum_cilindros();
    float getpotencia();
    
    void setnum_cilindros(int num_cilindros);
    void setpotencia(float potencia);
    
    // construtores
    Motor();
    Motor(float,float,float,int, float);

    void print_motor();
};