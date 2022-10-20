#ifndef MOTOR_H
#define MOTOR_H
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Motor {

private:
    int cilindros;
    int potencia;

public:
    Motor() = default;
    Motor(int cilindros, int potencia);

    void setCilindros(int);
    int getCilindros();
    void setPotencia(int);
    int getPotencia();

    void print();

};

#endif