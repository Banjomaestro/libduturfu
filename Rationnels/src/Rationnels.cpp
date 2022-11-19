#include "../include/Rationnels.hpp"

Rationnels ::Rationnels(int nume, int deno){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}


Rationnels ::Rationnels(){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}

Rationnels ::Rationnels(float ratio){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}



Rationnels Rationnels::operator+(const Rationnels rationnel){

    if (numerator==0){
        return rationnel;
    }

    if (rationnel.numerator==0){
        return *this;
    }


    return Rationnels((numerator*rationnel.denominator + denominator*rationnel.numerator),denominator*rationnel.denominator);
}


Rationnels Rationnels::operator*(const Rationnels rationnel){

    if (numerator==0||rationnel.numerator==0 ){
        return 0;
    }

    return Rationnels((numerator*rationnel.numerator),(denominator*rationnel.denominator));
}


Rationnels Rationnels::operator!(){

    if (numerator==0){
        return 0;
    }

    return Rationnels(denominator,numerator);
}


Rationnels Rationnels::operator/(const Rationnels rationnel){

    if (numerator==0||rationnel.denominator==0 ){
        return 0;
    }

    return Rationnels(numerator*rationnel.denominator,denominator*rationnel.numerator);
}


Rationnels Rationnels::squareRoot(){

    if (numerator==0){
        return 0;
    }

    return Rationnels(sqrt(numerator),sqrt(denominator));
}


Rationnels Rationnels::power(float n){

    if (numerator==0){
        return 0;
    }

    else if(n==0){
        return 1;
    }

    return Rationnels(pow(numerator,n),pow(denominator, n));
}


std::ostream& operator<< (std::ostream& stream, const Rationnels v){

    std::cout<<v.numerator<<"/"<<v.denominator;

    return stream;
    

}