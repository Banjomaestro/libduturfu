#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <algorithm>

class Rationnels {
        
    public:
        int numerator;
        int denominator;
        Rationnels();
        Rationnels(float ratio);
        Rationnels(int nume, int deno);
        Rationnels reverse();
        Rationnels operator+(const Rationnels rationnel);
        Rationnels operator*(const Rationnels rationnel);
        Rationnels operator!();
        Rationnels operator-(const Rationnels rationnel);
        Rationnels operator-();
        Rationnels operator/(const Rationnels rationnel);
        Rationnels squareRoot();
        Rationnels power(float n);
        Rationnels getRationnel(float ratio, int iterations);
        
};

std::ostream& operator<< (std::ostream& stream, const Rationnels& v);




