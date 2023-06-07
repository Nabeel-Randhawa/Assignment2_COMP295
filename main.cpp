// main.cpp

#include <iostream>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"


using namespace std;
int main(int argc, char* argv[]) {
    if (argc > 9) {
        cout << "Invild arguments\n";
        return 1;
    }
    // storing command line arguments to variables
    int int_real1 = atoi(argv[1]);
    int int_imag1 = atoi(argv[2]);
    
    IntComplex intComplex1(int_real1, int_imag1);
    
    
    int int_real2 = atoi(argv[3]);
    int int_imag2 = atoi(argv[4]);
    
    IntComplex intComplex2(int_real2, int_imag2);
    
    //Performing operations on complex numbers
    IntComplex int_sum = intComplex1 + intComplex2;
    IntComplex int_subract = intComplex1 - intComplex2;
    IntComplex int_multiply= intComplex1 * intComplex2;
    IntComplex int_division = intComplex1 / intComplex2;
    
    
    float float_real1 = atof(argv[5]);
    float float_imag1 = atof(argv[6]);
    
    FloatComplex floatComplex1(float_real1, float_imag1);
    
    float float_real2 = atof(argv[7]);
    float float_imag2 = atof(argv[8]);

    
    FloatComplex floatComplex2(float_real2, float_imag2);
    
    
    //printing integer complex numbers
    cout<<"Integer complex numbers are: "<<endl;
    
    intComplex1.print();
    intComplex2.print();
    
    //printing float complex numbers
    cout<<"Float complex numbers are: "<<endl;
    floatComplex1.print();
    floatComplex2.print();

    
    
    //Performing operations on float complex numbers
    
    FloatComplex float_sum = floatComplex1 + floatComplex2;
    FloatComplex float_subtract = floatComplex1 - floatComplex2;
    FloatComplex float_multiply = floatComplex1 * floatComplex2;
    FloatComplex float_division = floatComplex1 / floatComplex2;
    
    
    
    //printing integer complex number operations
    

    
    cout<<"             INTERGER COMPLEX RESULTS:"<<endl;
    
    
    cout << "Sum of complex numbers: ";
    int_sum.print();
   
    cout << "Subract of complex numbers: ";
    int_subract.print();
    
    cout << "Multiplication of complex numbers:";
    int_multiply.print();
    
    cout << "Division of complex numbers: ";
    int_division.print();
    
    
    
     
    cout<<                 "FLOAT COMPLEX RESULTS: "<<endl; //printing float complex number operations 
    
    cout << "Sum of complex numbers:";
    float_sum.print();
    
    cout << "Subract of complex numbers:  ";
    float_subtract.print();
    
    cout << "Multiplication of complex numbers:";
    float_multiply.print();
    
    cout << "Division of complex numbers: ";
    float_division.print();
    
    
    
    return 0;
}
