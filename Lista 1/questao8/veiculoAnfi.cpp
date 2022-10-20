#include <iomanip>
#include <iostream>
#include <string>
#include "veiculoAnfi.h"

using namespace std;

    VeiculoAnfi::VeiculoAnfi(string modelo, int valor, int ano, string placa, int valorpneu, int qntRodas, string marca, int gasolina, int capacidade, string estilo, int parafolio, int pregos) : Veiculo(modelo, valor, ano), VeiculoTerra(placa, valorpneu, qntRodas) , VeiculoAqua(marca, gasolina, capacidade) {

        setEstilo(estilo);
        setParafolio(parafolio);
        setPregos(pregos);
    }

    void VeiculoAnfi::setEstilo(string estilo){
        this->estilo = estilo;
    }
    void VeiculoAnfi::setParafolio(int parafolio){
        this->parafolio = parafolio;
    }
    void VeiculoAnfi::setPregos(int pregos){
        this->pregos = pregos;
    }
    string VeiculoAnfi::getEstilo(){
        return estilo;
    }
    int VeiculoAnfi::getParafolio(){
        return parafolio;
    }
    int VeiculoAnfi::getPregos(){
        return pregos;
    }

    void VeiculoAnfi::print(){

        Veiculo::print();
        VeiculoAqua::print();
        VeiculoTerra::print();

        cout << "Estilo: " << getEstilo() << endl;
        cout << "Valor do parafolio: " << getParafolio() << endl;
        cout << "Quantos pregos tem essa peste: " << getPregos() << endl;
    }