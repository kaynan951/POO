#include <iomanip>
#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

    Veiculo::Veiculo(string modelo, int valor, int ano) {
        setModelo(modelo);
        setValor(valor);
        setAno(ano);
    }

    void Veiculo::setModelo(string modelo){
        this->modelo = modelo;
    }
    void Veiculo::setValor(int valor){
        this->valor = valor;
    }
    void Veiculo::setAno(int ano){
        this->ano = ano;
    }
    string Veiculo::getModelo(){
        return modelo;
    }
    int Veiculo::getValor(){
        return valor;
    }
    int Veiculo::getAno(){
        return ano;
    }

    void Veiculo::print(){

        cout << "Modelo: " << getModelo() << endl;
        cout << "Valor: " << getValor() << endl;
        cout << "Ano: " << getAno() << endl;
    }