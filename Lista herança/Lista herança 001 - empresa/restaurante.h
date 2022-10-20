#include<iostream>
#include <string>
#include"Empresa.h"
using namespace std;

class Restaurante : public Empresa{
    public:
        
        Restaurante(string nome,string endereco,string cidade,string estado,string cep, string telefone,string tipo, float preco);
        
        string gettipo();
        float getpreco();
        
        void settipo(string);
        void setpreco(float);
    
        void printa();
    private:
        string tipo;
        float preco;
};