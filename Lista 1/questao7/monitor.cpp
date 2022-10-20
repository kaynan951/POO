#include"Monitor.h"
#include<iostream>
#include<string>
using namespace std;

Monitor::Monitor(){

}

void Monitor::sethoras(int horas){
    this->horas = horas;
}

int Monitor::gethoras(){
    return horas;
}

void Monitor::setdisciplina(string disciplina){
    this->disciplina = disciplina;
}

string Monitor::getdisciplina(){
    return disciplina;
}

void Monitor::print(){

    cout << "Funcionario/Estudante" << endl 
                                    << endl;
    cout << "nome: " << Funcionario::getnome() << endl << "ou" << endl << "nome: " << Estudante::getnome() << endl;
    cout << "matricula: " << Estudante::getmatricula() << endl;
    cout << "salario: " << Funcionario::getsalario() << endl;
    cout << "turno: " << Funcionario::getturno() << endl;
    cout << "Curso: " << Estudante::getcurso() << endl;
    cout << "disciplina: " << getdisciplina() << endl;
    cout << "carga horaria: " << gethoras() << endl;
    cout << "RG: " << Funcionario::getRG() << endl;
}