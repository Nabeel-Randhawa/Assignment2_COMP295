//Nabeel Randhawa(241560260)

//FloatComplex.cpp

#include "FloatComplex.h"
#include <iostream>

using namespace std;
						//constructor
FloatComplex::FloatComplex(float r, float i)
    : IntComplex(int(r), int(i)) {
    real = r;
    imag = i;
}
								//Overloading + operator
FloatComplex FloatComplex::operator+(const FloatComplex& c){
    float real1 = real + c.real;
    float imag1 = imag + c.imag;
    return FloatComplex(real1, imag1);
}

FloatComplex FloatComplex::operator-(const FloatComplex& c){
    float real2 = real - c.real;
    float imag2 = imag - c.imag;
    return FloatComplex(real2, imag2);
}

FloatComplex FloatComplex::operator*(const FloatComplex& c){
    float real3= real * c.real - imag * c.imag;
    float imag3 = real * c.imag + imag * c.real;
    return FloatComplex(real3,imag3);
}

FloatComplex FloatComplex::operator/(const FloatComplex& c){
    float deno= c.real * c.real + c.imag * c.imag;
    float real4 = (real * c.real + imag * c.imag) / deno;
    float imag4= (imag * c.real - real * c.imag) / deno;
    return FloatComplex(real4, imag4);
}

void FloatComplex::print() const {
    if (imag >= 0) {
        cout << real << " + " << imag << "i"<<endl;
    } else {
        cout << real << " - " << imag << "i"<<endl;
    }
}
