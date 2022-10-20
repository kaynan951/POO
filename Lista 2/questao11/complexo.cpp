#include <iomanip>
#include <iostream>
#include <string>
#include "Complexo.h"

Complexo::Complexo( double realPart, double imaginaryPart ) : real( realPart ), imaginary( imaginaryPart ) {

}

Complexo Complexo::operator + ( const Complexo &operand2 ) const {
    return Complexo( real + operand2.real, imaginary + operand2.imaginary );
}

Complexo Complexo::operator - ( const Complexo &operand2 ) const {
    return Complexo( real - operand2.real, imaginary - operand2.imaginary );
}

Complexo Complexo::operator * ( const Complexo &operand2 ) const {
    return Complexo( real * operand2.real, imaginary * operand2.imaginary );
}

bool Complexo::operator == ( const Complexo &operand2 ) const {

    if ( real == operand2.real && imaginary == operand2.imaginary ) { 
        return true; 
    }
    else { 
        return false; 
    }
}

bool Complexo::operator != ( const Complexo &operand2 ) const {

    if ( real != operand2.real || imaginary != operand2.imaginary ) { 
        return true; 
    }
    else { 
        return false; 
    } 
}


void Complexo::imprimir() const {
    cout << "(" << real << " , " << imaginary << ")" << endl;
}