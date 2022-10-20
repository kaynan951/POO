#include <iostream>
#include <string>
#include "funcionario.h"
#include "funcionario horista.h"
#include "funcionario assalariado.h"
#include "funcionario comissionado.h"
#include "funcionario assalariado comissionado.h"
using namespace std;

int main() {
    Funcionario *vector[] = {
        new FuncionarioAssalariado("Kaynan", "Pereira", "123456789", 1000),
        new FuncionarioComissionado("Ze", "Tabaco", "987654321", 1000, 0.1),
        new FuncionarioHorista("Jose", "Maria", "123456789", 10, 50),
        new FuncionarioAssalariadoComissionado("Joao", "Silva", "123456789", 1000, 0.1, 1000)
    };
        for(int i = 0; i < 4; i++) {
            
            vector[i]->print();
            cout << "Rendimento: " << vector[i]->calculoRendimento() << endl;
            cout << endl;

        }

        for(int i = 0; i < 4; i++) {
            delete vector[i];
        }

}
