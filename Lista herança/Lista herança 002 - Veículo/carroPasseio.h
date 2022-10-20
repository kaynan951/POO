#include <iostream>
#include <string>
#include "Motor.h"
using namespace std;

// herança da classe
class CarroPasseio : public Veiculo,Motor{
    private:
        string cor;
        string modelo;
    public:
        
        void setcor(string cor);
        void setmodelo(string modelo);
        
        string getcor();
        string getmodelo();
        
        void print_carropasseio();

        // construtores
        CarroPasseio(); 
        CarroPasseio(float peso, float velmax, float preco, int num_cilindros, float potencia,string cor, string modelo);
};