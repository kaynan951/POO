#include <iomanip>
#include <iostream>
#include <string>
#include "estacionamento.h"
#include "tempo.h"

int main() {

    Estacionamento *corolla = new Estacionamento("KAYN4N99", "2022 NOVO");
    Tempo *HoraEntrada = new Tempo(10, 20, 10);
    Tempo *HoraSaida = new Tempo(12, 30, 20);
    Tempo *Aux = new Tempo();

    Aux = HoraEntrada;
    Aux->subtrai(HoraSaida); // subtrai a hora de saida da hora de entrada
    // 2:10:10
    
    corolla->imprimirCarro();
    cout << "Custo total: R$" << corolla->custoHoras(Aux->getHora()) << endl;

    return 0;
}