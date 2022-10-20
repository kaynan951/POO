#include<iostream>
#include<cstdlib>
#include<string>
#include"Restaurante.h"

using namespace std;

int main(){
    string nome,endereco,cidade,estado,cep,telefone,tipo;
    float preco;
    
    cout << "nome: ";
    getline(cin, nome);
    
    cout << "endereco: ";
    getline(cin, endereco);
    
    cout << "cidade: ";
    getline(cin, cidade);
    
    cout << "estado: ";
    getline(cin, estado);
    
    cout << "cep: ";
    getline(cin, cep);
    
    cout << "telefone: ";
    getline(cin, telefone);
    
    cout << "tipo de comida: ";
    getline(cin, tipo);
    
    cout << "preco: ";
    cin >> preco;

    Restaurante *r = new Restaurante(nome,endereco,cidade,estado,cep,telefone,tipo,preco);

    r->printa();

}