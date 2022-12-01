#include "../include/Rationnels.hpp"

Rationnels ::Rationnels(int nume, int deno){

    const long gcd = std::__algo_gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;
}


Rationnels ::Rationnels(){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}

Rationnels ::Rationnels(float ratio){

    *this = getRationnel(ratio,50);
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

Rationnels Rationnels::operator-(const Rationnels rationnel){
    return Rationnels((numerator*rationnel.denominator - denominator*rationnel.numerator),denominator*rationnel.denominator);

}

Rationnels Rationnels::operator-(){
    return Rationnels(-this->numerator,this->denominator);    
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

Rationnels Rationnels::getRationnel(float ratio, int iterations){
    if(ratio == 0 || iterations ==0){
        return Rationnels(0,1);
    }else if(ratio<1){
        Rationnels toReturn = getRationnel(1/ratio, iterations);
        toReturn.reverse();
        return toReturn;
    }else if(ratio>=1){
        int whole = floor(ratio);
        return Rationnels(whole,1)+getRationnel(ratio-whole,iterations-1);
    }
}

Rationnels Rationnels::reverse(){
    int temp = denominator;
    this->denominator = numerator;
    this->numerator = temp;
}


Rationnels Rationnels::exponentielle(const Rationnels &R) {
    
    int k = R.denominator*log(2) - log(2)/2;
    Rationnels r = (R.numerator-k*log(2)*R.denominator)/R.denominator;
 
    return Rationnels(exponentielle(r)*pow(2,k));
}

Rationnels Rationnels::logarithme() {
    if (numerator==0 || denominator==0){
        return 0;
    }

    return Rationnels(log(numerator)-log(denominator));
}

Rationnels Rationnels::cosinus() {
    if (numerator==0){
        return 1;
    }

    float k = numerator/denominator;

    return Rationnels(cos(k));
}

Rationnels Rationnels::sinus() {
    if (numerator==0){
        return 0;
    }

    float k = numerator/denominator;

    return Rationnels(sin(k));
}

Rationnels Rationnels::tangente() {
    if (numerator==0){
        return 0;
    }

    float k = numerator/denominator;

    return Rationnels(tan(k));
}



std::ostream& operator<< (std::ostream& stream, const Rationnels& v){
    std::cout<<" numerator :  "<<v.numerator<<std::endl<<" denominator :  "<<v.denominator<<std::endl;
    return stream;
}

