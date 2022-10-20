#ifndef INSETO_H_INCLUDED
#define INSETO_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Inseto {
private:
    string nomeInseto;
    bool venenoso;
    bool alado;
    bool ferrao;

public:
    Inseto(string nomeInseto, bool venenoso, bool alado, bool ferrao);

    void setNomeInseto(string);
    void setVenenoso(bool);
    void setAlado(bool);
    void setFerrao(bool);

    string getNomeInseto();
    bool getVenenoso();
    bool getAlado();
    bool getFerrao();

};



#endif