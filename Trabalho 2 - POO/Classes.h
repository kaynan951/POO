#ifndef CLASS_INCLUDED
#define CLASS_INCLUDED
// biblioteca
#include<iostream>
using namespace std;

//classe
class Membros{

	private:
		// atributos
		string nome,email,ocupacao,palavra_chave;
		int idade;
		char sexo;
		
	public:
		// construtor
		Membros(int n);
		// encapsulamento(gets e sets)
		
		//gets
		string getnome();
		string getemail();
		string getocupacao();
		string getpalavra_chave();
		int getidade();
		char getsexo();
		
		//sets
		void setnome(string n);
		void setemail(string n);
		void setocupacao(string n);
		void setpalavra_chave(string n);
		void setidade(int n);
		void setsexo(char n);
		
		//metodo
		void imprimir();
};

// construtor
Membros::Membros(int n){
	if(n == 1){
		this->nome = "Thiago Werlley";
		this->email = "thiago@ufc.com.br";
		this->ocupacao = "Professor";
		this->palavra_chave = "facil de mais";
		this->idade = 30;
		this->sexo = 'M'; 
	}
	else if(n == 2){
		this->nome = "Julio Marcelo";
		this->email = "JulioM@tec.ufc.com.br";
		this->ocupacao = "Tecnico";
		this->palavra_chave = "senha123";
		this->idade = 22;
		this->sexo = 'M'; 
	}else if(n == 3){
		this->nome = "Andressa kaynan";
		this->email = "Dressinha@alu.ufc.com.br";
		this->ocupacao = "Aluna";
		this->palavra_chave = "Big horse";
		this->idade = 19;
		this->sexo = 'F'; 
	}else{
		cout << "Erro!" << endl;
	}
		
};

//gets
string Membros::getnome(){
	return nome;
};

string Membros::getemail(){
	return email;
};

string Membros::getocupacao(){
	return ocupacao;	
};

string Membros::getpalavra_chave(){
	return palavra_chave;
};

int Membros::getidade(){
	return idade;
};

char Membros::getsexo(){
	return sexo;
};

//sets
void Membros::setnome(string n){
	nome = n;
};

void Membros::setemail(string n){
	email = n;
};

void Membros::setocupacao(string n){
	ocupacao = n;
};

void Membros::setpalavra_chave(string n){
	palavra_chave = n;
};

void Membros::setidade(int n){
	idade = n;
};

void Membros::setsexo(char n){
	sexo = n;
};

//metodo

void Membros::imprimir(){  //1-professor, 2-técnico e 3-alunos

    cout << "Nome: " << nome << endl;
    cout << "ocupacao: " << ocupacao << endl;
    cout << "Email: " << email << endl;
    cout << "palavra chave: " << palavra_chave<< endl;
    cout << "idade: " << idade<< endl;
    cout << "sexo: " << sexo<< endl << endl;    

};
#endif