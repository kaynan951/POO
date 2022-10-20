#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Data {

private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes, int ano);

    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();

    void print();

    void calculeDias();
    void calculeDias(string);

};