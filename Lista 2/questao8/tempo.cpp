#include <iomanip>
#include <iostream>
#include <string>
#include "tempo.h"

// constructor com o valor zerado
Tempo::Tempo() {
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
}
// constructor para inicialização
Tempo::Tempo(int hora, int minuto, int segundo) {
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Tempo::setHora(int hora) {
    this->hora = hora;
}
void Tempo::setMinuto(int minuto) {
    this->minuto = minuto;
}
void Tempo::setSegundo(int segundo) {
    this->segundo = segundo;
}

int Tempo::getHora() {
    return this-> hora;
}
int Tempo::getMinuto() {
    return this-> minuto;
}
int Tempo::getSegundo() {
    return this-> segundo;
}

void Tempo::imprimir() {
    // ficar no formato hh:mm:ss 
    if(this->hora < 10) {
        cout << "0" << this->hora << ":";
    } else {
        cout << this->hora << ":";
    }
    // ficar no formato hh:mm:ss 
    if(this->minuto < 10) {
        cout << "0" << this->minuto << ":";
    } else {
        cout << this->minuto << ":";
    }
    // ficar no formato hh:mm:ss 
    if(this->segundo < 10) {
        cout << "0" << this->segundo << endl;
    } else {
        cout << this->segundo << endl;
    }


}

void Tempo::subtrai(Tempo *tempo) {
// ABS: pega o modulo
    this->hora = abs(this->hora - tempo->hora);
    this->minuto = abs(this->minuto - tempo->minuto);
    this->segundo = abs(this->segundo - tempo->segundo);

}

void Tempo::soma(int hora, int minuto, int segundo) {

    this->hora = this->hora + hora;
    this->minuto = this->minuto + minuto;
    this->segundo = this->segundo + segundo;

}

Tempo Tempo::soma(Tempo *tempo) {

    tempo->setHora(tempo->hora + this->hora);
    tempo->setMinuto(tempo->minuto + this->minuto);
    tempo->setSegundo(tempo->segundo + this->segundo);

    return *tempo;

}