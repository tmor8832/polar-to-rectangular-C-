//.hpp

#ifndef OOPComplex_hpp
#define OOPComplex_hpp
#include <iostream>

class ComplexNum {
private: float real, imag;
    
public: ComplexNum(float, float);
    void Displayrec(float, float);
    void Displaypol(float, float);
    float magnitude(float,float);
    float argument(float,float);
    float polarg(float);
    float polmag(float);
    
};

#endif /* OOPComplex_hpp */
