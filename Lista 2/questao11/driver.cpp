#include <iomanip>
#include <iostream>
#include <string>
#include "Complexo.h"

int main() {
    
    Complexo x;
    Complexo y(6.6, 6.6);
    Complexo z(5.8, 2.2);

// Testando os operadores aritmeticos
    x = y + z;
    x.imprimir();

    x = y - z;
    x.imprimir();

    x = y * z;
    x.imprimir();

// Testando os operadores booleanos
    if ( y == z ) { 
        cout << "True" << endl; 
    }
    else { 
        cout << "False" << endl; 
    }
    
    if ( y != z ) { 
        cout << "True" << endl; 
    }
    else { 
        cout << "False" << endl; 
    }

    return 0;
}