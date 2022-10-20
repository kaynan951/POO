#include <iostream>
#include <string>
using namespace std;

class Estudante
{
    private:

    string nome;
    string matricula;
    string curso;

    public:

    Estudante();
    //gets
    string getnome();
    string getmatricula();
    string getcurso();
    //sets
    void setnome(string);
    void setmatricula(string);
    void setcurso(string);
};