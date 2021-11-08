//  main.cpp

#include <iostream>
#include "OOPComplex.hpp"

using namespace std;

float a,b,c,d,x,y; //variables to hold user input data

float getVoltageMagnitude(float x){
    cout<<"Enter the polar voltage value of the source" << endl;
    cin>> c;
    return c; }

float getVoltageArgument(float y)
{   cout<<"Enter the angle of the source" << endl;
    cin>>d;
    return d;}

int main() {
    cout<<"Enter the real part of the number " << endl;
    cin>> a;
    cout<<"Enter the imaginary part of the number"<< endl;
    cin>> b;
    
    float c =  getVoltageMagnitude(x);
    float d =  getVoltageArgument(y);
    
    ComplexNum initial(a,b);
    ComplexNum second(c, d);
    initial.Displayrec(a, b);
    second.Displaypol(c, d);
    
    float arg = initial.argument(a,b);//Argument of Complex Number
    cout<<"The argument of the user complex number is " << arg << " degrees" << endl;
    float mag = initial.magnitude(a,b);     //Magnitude of Complex Number
    cout<<"The magnitude of the user complex number is " << mag << endl;
    cout<<"The result of the division is " << second.polmag(c)/mag << "< " << second.polarg(d)-arg << endl;
    
    system("pause");
    return 0;
}
