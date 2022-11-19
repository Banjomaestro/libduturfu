#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>

class Rationnels {
        
    public:
        int numerator;
        int denominator;
        Rationnels();
        Rationnels(float ratio);
        Rationnels(int nume, int deno);
        //Rationnels reverse();
        Rationnels operator+(const Rationnels rationnel);
        Rationnels operator*(const Rationnels rationnel);
        Rationnels operator!();
        Rationnels operator/(const Rationnels rationnel);
        Rationnels squareRoot();
        Rationnels power(float n);
    
        
};

//template<typename T>
//std::ostream& operator<< (std::ostream& stream, const Rationnels& v);



