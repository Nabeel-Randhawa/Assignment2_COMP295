//Nabeel Randhawa(241560260)
//FloatComplex.h

#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h" // IntComplex for inheritance


class FloatComplex : public IntComplex
{
private:
   
    float real;   
    float imag;
public:
    
    FloatComplex(float r, float i);
    
    //declaring Overloading operators
    FloatComplex operator+(const FloatComplex& c);
    FloatComplex operator-(const FloatComplex& c);
    FloatComplex operator*(const FloatComplex& c);
    FloatComplex operator/(const FloatComplex& c);
    
    //printing function
    
    void print() const;
};

#endif
