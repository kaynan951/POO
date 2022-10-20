#include<iostream>
using namespace std;

class Veiculo{
    private:
        float peso;
        float velmax;
        float preco;    
    public:
        // construtores
        Veiculo();
        Veiculo(float peso, float velmax, float preco);
        
        float getpeso();
        float getvelmax();
        float getpreco();
        
        void setpeso(float peso);
        void setvelmax(float velmax);
        void setpreco(float preco);
        
        void print();
};