#ifndef PACOTE_H_INCLUDED
#define PACOTE_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Pacote {
protected:
    string nomeDestinatario;
    string enderecoDestinatario;
    string cidadeDestinatario;
    string cepDestinatario;
    string nomeRemetente;
    string enderecoRemetente;
    string cidadeRementente;
    string estadoRemetente;
    string cepRemetente;
    float peso;
    float precoKG;

public:
    Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRementente, string estadoRemetente, string cepRemetente, float peso,float precoKG);

    void calculaCusto(double);
    //sets
    void setNomeDestinatario(string);
    void setEnderecoDestinatario(string);
    void setCidadeDestinatario(string);
    void setCepDestinatario(string);
    void setNomeRemetente(string);
    void setEnderecoRemetente(string);
    void setCidadeRementente(string);
    void setEstadoRemetente(string);
    void setCepRemetente(string);
    void setPeso(float);
    void setPrecoKG(float);
    //gets
    string getNomeDestinatario();
    string getEnderecoDestinatario();
    string getCidadeDestinatario();
    string getCepDestinatario();
    string getNomeRemetente();
    string getEnderecoRemetente();
    string getCidadeRementente();
    string getEstadoRemetente();
    string getCepRemetente();
    float getPeso();
    float getPrecoKG();
};


#endif
