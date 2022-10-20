/*
 *  alunos : LUIZ GUILHERME MOREIRA LEITE		MATRÍCULA: 537949
 * 
 * 	alunos: KAYNAN PEREIRA DE SOUSA		MATRÍCULA: 540864
 */

// biblioteca
#include<iostream>
// arqv cabeçalho
#include"classes.h"

using namespace std;

//main
int main(){
	// criando obejtos
	Membros  *professor = new Membros(1);
	
	Membros *tecnico = new Membros(2);
	
	Membros *alunos = new Membros(3);
	
	// printando
	professor->imprimir();
	tecnico->imprimir();
	alunos->imprimir(); 
}