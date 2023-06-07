// IntComplex.h

#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

class IntComplex {
private:
    int real;
       
    int imag;  

public:
  
    IntComplex(int r, int i);   //declaring constructor

    //declaring Overloading operators
    IntComplex operator+(const IntComplex& c);
    IntComplex operator-(const IntComplex& c);
    IntComplex operator*(const IntComplex& c);
    IntComplex operator/(const IntComplex& c);

    //printing function 
    void print() const;
};

#endif
