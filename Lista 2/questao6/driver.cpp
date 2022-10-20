#include <iomanip>
#include <iostream>
#include <string>
#include "aluno.h"
using namespace std;

int main() {

Aluno alunos[15];

    for (int i = 0; i < 15; i++) {

        int auxInteiro;

        string aux = " "; // string vazia

        cin >> aux;
        alunos[i].setNome(aux);

        cin >> auxInteiro;
        cin.ignore(); //ignorar buffer do teclado
        alunos[i].setSerie(auxInteiro);

        cin >> aux;
        alunos[i].setGrau(aux);
    }

    alunos[0].getContAluno(); // contar a quantidade de alunos criados

    return 0;
}