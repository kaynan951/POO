#include <iomanip>
#include <iostream>
#include <string>
#include "veiculoTerrestre.h"

using namespace std;

VeiculoTerra::VeiculoTerra(string modelo, int valor, int ano, string placa, int valorpneu, int qntRodas) : Veiculo(modelo, valor, ano) {
    setPlaca(placa);
    setValorpneu(valorpneu);
    setQntRodas(qntRodas);
}

void VeiculoTerra::setPlaca(string placa){
        this->placa = placa;
    }
    void VeiculoTerra::setValorpneu(int valorpneu){
        this->valorpneu = valorpneu;
    }
    void VeiculoTerra::setQntRodas(int qntRodas){
        this->qntRodas = qntRodas;
    }
    string VeiculoTerra::getPlaca(){
        return placa;
    }
    int VeiculoTerra::getValorpneu(){
        return valorpneu;
    }
    int VeiculoTerra::getQntRodas(){
        return qntRodas;
    }

    void VeiculoTerra::print(){

        cout << "Placa: " << getPlaca() << endl;
        cout << "Valor do pneu: " << getValorpneu() << endl;
        cout << "Quantidade de pneus: " << getQntRodas() << endl;
    }