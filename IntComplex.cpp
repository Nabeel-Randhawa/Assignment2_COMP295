
//IntComplex.cpp


#include <iostream>
#include "IntComplex.h"
using namespace std;
//defining Constructor
IntComplex::IntComplex(int r, int i) {
    real = r;
    imag = i;
}

IntComplex IntComplex::operator+(const IntComplex& c){ //Overloading + operator
    int int_real = real + c.real;
    int int_imag = imag + c.imag;
    return IntComplex(int_real, int_imag);
}

IntComplex IntComplex::operator-(const IntComplex& c){ //Overloading - operator
    int int_real = real - c.real;
    int int_imag = imag - c.imag;
    return IntComplex(int_real, int_imag);
}

IntComplex IntComplex::operator*(const IntComplex& c){ //Overloading * operator
    int int_real = (real * c.real) - (imag * c.imag);
    int int_imag = (real * c.imag) + (imag * c.real);
    return IntComplex(int_real, int_imag);
}

IntComplex IntComplex::operator/(const IntComplex& c){  //Overloading / operator
    int divisor = (c.real * c.real) + (c.imag * c.imag);
    int int_real = ((real * c.real) + (imag * c.imag)) / divisor;
    int int_imag = ((imag * c.real) - (real * c.imag)) / divisor;
    return IntComplex(int_real, int_imag);
}

void IntComplex::print() const { //print function
   
    if (imag >= 0) {
        cout << real<<" + " << imag << "i"<<endl;
    } else {
        cout << real<<" - " << imag << "i"<<endl;
    }
}
