//.cpp

#include "OOPComplex.hpp"
#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265

ComplexNum::ComplexNum(float real, float imag)
{
}

void ComplexNum::Displayrec(float real, float imag)
{
    char x = '+'; // initialise x
    if (imag >= 0) x = '+'; //determine sign
    if (imag < 0) x = '-';
    
    //use of fabs to get float absolute value
    cout << "Complex number is " << real << x << "j" << fabs(imag) << endl;
}

void ComplexNum::Displaypol(float real, float imag)
{
    cout << "The polar number is " << real << "< " << imag << endl;
}

float ComplexNum :: magnitude(float imag,float real)
{
    imag = imag*imag;
    real = real*real;
    float total = imag + real ; // add squared results
    return sqrtf(total);
}

float ComplexNum :: argument(float imag,float real)
{
    float t = atan((real/imag))* 180/PI; //atan is inverse tan
    return t;
}

float ComplexNum::polmag(float real)
{
    float polarvoltage = real;
    
    return polarvoltage;
}

float ComplexNum::polarg(float imag)
{
    float polararg = imag;
    return polararg;
}


