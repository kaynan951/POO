#include <iomanip>
#include <iostream>
#include <string>
#include "veiculoAquatico.h"

using namespace std;

    VeiculoAqua::VeiculoAqua(string modelo, int valor, int ano, string marca, int gasolina, int capacidade) : Veiculo(modelo, valor, ano) {
        this -> marca = marca;
        this -> gasolina = gasolina;
        this -> capacidade = capacidade;
    }

    void VeiculoAqua::setMarca(string marca){
        this->marca = marca;
    }
    void VeiculoAqua::setGasolina(int gasolina){
        this->gasolina = gasolina;
    }
    void VeiculoAqua::setCapacidade(int capacidade){
        this->capacidade = capacidade;
    }
    string VeiculoAqua::getMarca(){
        return marca;
    }
    int VeiculoAqua::getGasolina(){
        return gasolina;
    }
    int VeiculoAqua::getCapacidade(){
        return capacidade;
    }

    void VeiculoAqua::print(){

        cout << "Marca: " << getMarca() << endl;
        cout << "Gasolina possivel: " << getGasolina() << endl;
        cout << "Capacidade: " << getCapacidade() << endl;
    }