#include <iostream>
#include "conta.h"
using namespace std;

int main(){
    float a;
    
    cout << "digite o valor inicial do saldo do seu Banco: ";
    cin >> a;
    
    Conta *banco = new Conta(a);

    cout << "valor atual: " << banco->getsaldo() << endl;
    banco->Credito();
    cout << "valor apos credito: " << banco->getsaldo() << endl;
    banco->Debito();
    cout << "valor apos debito: " << banco->getsaldo() << endl << endl;

    cout << "------------------------------------------------------------------" << endl << endl;

    Conta *banco2 = new Conta(-1);

    cout << "valor atual: " << banco2->getsaldo() << endl;
    banco2->Credito();
    cout << "valor apos credito: " << banco2->getsaldo() << endl;
    banco2->Debito();
    cout << "valor apos debito: " << banco2->getsaldo() << endl << endl;
}