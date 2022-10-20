#include <iomanip>
#include <iostream>
#include <string>
#include "data.h"
using namespace std;

Data::Data(int dia, int mes, int ano){

    if(dia > 0 && dia <= 31){
        setDia(dia);
    }else{
        cout << "\nERROR: Selecione o dia de maneira correta\n";
    }

    if(mes > 0 && mes <= 12){
        setMes(mes);
    }else{
        cout << "\nERROR: Selecione o mes de maneira correta\n";
    }

    if(ano > 0 && ano <= 2022){
        setAno(ano);
    }else{
        cout << "\nERROR: Selecione o ano de maneira correta\n";
    }
}

    void Data::setDia(int dia){
        this->dia = dia;
    }
    void Data::setMes(int mes){
        this->mes = mes;
    }
    void Data::setAno(int ano){
        this->ano = ano;
    }

    int Data::getDia(){
        return dia;
    }
    int Data::getMes(){
        return mes;
    }
    int Data::getAno(){
        return ano;
    }
    
    void Data::print(){
        cout << Data::getDia() << "/" << Data::getMes() << "/" << Data::getAno() << endl;
    }

    void Data::calculeDias(){
        int dias = 0;
        int mes = Data::getMes();
        int ano = Data::getAno();
        int dia = Data::getDia();

        if(mes == 1){
            dias = dia;
        }else if(mes == 2){
            dias = 31 + dia;
        }else if(mes == 3){
            dias = 59 + dia;
        }else if(mes == 4){
            dias = 90 + dia;
        }else if(mes == 5){
            dias = 120 + dia;
        }else if(mes == 6){
            dias = 151 + dia;
        }else if(mes == 7){
            dias = 181 + dia;
        }else if(mes == 8){
            dias = 212 + dia;
        }else if(mes == 9){
            dias = 243 + dia;
        }else if(mes == 10){
            dias = 273 + dia;
        }else if(mes == 11){
            dias = 304 + dia;
        }else if(mes == 12){
            dias = 334 + dia;
        }

        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            dias = dias + 1;
        }

        cout << "O numero de dias desde o inicio do ano ate a data selecionada e: " << dias << endl;
    }

    void Data::calculeDias(string mes)
{
    int cont, dias = 0;
    if (mes == "janeiro")
        cont = 1;
    else if (mes == "fevereiro")
        cont = 2;
    else if (mes == "março")
        cont = 3;
    else if (mes == "abril")
        cont = 4;
    else if (mes == "maio")
        cont = 5;
    else if (mes == "junho")
        cont = 6;
    else if (mes == "julho")
        cont = 7;
    else if (mes == "agosto")
        cont = 8;
    else if (mes == "setembro")
        cont = 9;
    else if (mes == "outubro")
        cont = 10;
    else if (mes == "novembro")
        cont = 11;
    else if (mes == "dezembro")
        cont = 12;

    for (int i = 1; i < cont; i++)
    {
        if (i % 2 == 0) {
            dias += 30;
        }
        else {
            dias += 31;
        }
    }
    cout << "O numero de dias desde o inicio do ano ate o mes selecionado e: " << dias << endl;
}
