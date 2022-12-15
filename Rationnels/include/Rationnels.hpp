#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <cassert>

class Rationnels {
        
    public:
        long long numerator;
        long long denominator;
        Rationnels();
        Rationnels(float ratio);
        Rationnels(long nume, long deno);
        Rationnels reverse();
        Rationnels operator+(const Rationnels rationnel);
        Rationnels operator*(const Rationnels rationnel);
        Rationnels operator!();
        Rationnels operator-(const Rationnels rationnel);
        Rationnels operator-();
        Rationnels operator/(const Rationnels rationnel);
        bool operator==(const Rationnels &R);
        bool operator!=(const Rationnels &R);
        bool operator<=(Rationnels R);
        bool operator<(Rationnels R);
        bool operator>(Rationnels R);
        bool operator>=(Rationnels R);
        Rationnels squareRoot();
        Rationnels power(float n);
        Rationnels getRationnel(float ratio, int iterations);
        Rationnels getRationnelMinus(float ratio, int iterations);
        Rationnels exponentielle();
        Rationnels logarithme();
        Rationnels cosinus();
        Rationnels sinus();
        Rationnels tangente();
        Rationnels absolue();
        int whole();
        Rationnels floatProduct(float F);
        Rationnels floatDivide(float F);
        
        
};

std::ostream& operator<< (std::ostream& stream, const Rationnels& v);


