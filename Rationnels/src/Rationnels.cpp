#include "../include/Rationnels.hpp"

Rationnels ::Rationnels(long nume, long deno){

    if (deno==0){
        throw std::domain_error("divide by zero");
    }

    const long gcd = std::__algo_gcd(nume,deno);
 
    this->numerator = nume/gcd;
    this->denominator = deno/gcd;


}


Rationnels ::Rationnels(){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}

Rationnels ::Rationnels(float ratio){

    Rationnels current = getRationnel(ratio,10);
    if(current.denominator<0){
        current.numerator = -current.numerator;
        current.denominator = -current.denominator;
    }

    *this = current;
    
    const long gcd = std::__algo_gcd(this->numerator,this->denominator);
    this->numerator /= gcd;
    this->denominator /= gcd;

}



Rationnels Rationnels::operator+(const Rationnels rationnel) const{

    if (numerator==0){
        return rationnel;
    }

    if (rationnel.numerator==0){
        return *this;
    }

    const long gcd = std::__algo_gcd(rationnel.denominator,denominator);
    long newRatioDeno = rationnel.denominator/gcd;
    long newDeno = denominator/gcd;

    return Rationnels((numerator*newRatioDeno + newDeno*rationnel.numerator),newDeno*rationnel.denominator);
}




Rationnels Rationnels::operator*(const Rationnels rationnel) const{

    if (numerator==0||rationnel.numerator==0 ){
        return 0;
    }

    return Rationnels((numerator*rationnel.numerator),(denominator*rationnel.denominator));
}


Rationnels Rationnels::operator!() const{

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    if (numerator==0){
        return 0;
    }

    return Rationnels(denominator,numerator);
}


Rationnels Rationnels::operator/(const Rationnels rationnel) const{

    if (this->numerator==0 ){
        return 0;
    }

    Rationnels temp = rationnel;
    temp.reverse();

    return *this*temp;
}

Rationnels Rationnels::operator-(const Rationnels rationnel) const{

    if (rationnel.numerator/rationnel.denominator==numerator/denominator){
        return 0;
    }

    const long gcd = std::__algo_gcd(rationnel.denominator,denominator);
    int newRatioDeno = rationnel.denominator/gcd;
    int newDeno = denominator/gcd;

    return Rationnels((numerator*newRatioDeno - newDeno*rationnel.numerator),newDeno*rationnel.denominator);

}

Rationnels Rationnels::operator-() const{
    return Rationnels(-this->numerator,this->denominator);    
}


bool Rationnels::operator==(const Rationnels &R){

    if (numerator == R.numerator && denominator == R.denominator){
        return true;
    }
    
    else{
        return false;
    }
}

bool Rationnels::operator!=(const Rationnels &R){

    if (numerator != R.numerator || denominator != R.denominator){
        return true;
    }
    
    else{
        return false;
    }
}

bool Rationnels::operator<=(Rationnels R){
    if (numerator*R.denominator<= R.numerator*denominator){
        return true;
    }
    
    else{
        return false;
    }
}

bool Rationnels::operator>=(Rationnels R){
    if (numerator*R.denominator>= R.numerator*denominator){
        return true;
    }

    else{
        return false;
    }
    
}

bool Rationnels::operator<(Rationnels R){
    if (numerator*R.denominator< R.numerator*denominator){
        return true;
    }
    
    else{
        return false;
    }
}

bool Rationnels::operator>(Rationnels R){
    if (numerator*R.denominator> R.numerator*denominator){
        return true;
    }
    else{
        return false;
    }
}


Rationnels Rationnels::squareRoot(){

    if (numerator<0 || denominator<0){
        throw std::domain_error("you can't do the square root of a negative number");
    }

    if (numerator==0){
        return 0;
    }

    if (numerator==1 && denominator==1){
        return 1;
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

Rationnels Rationnels::getRationnel(float ratio, int iterations){

    Rationnels toReturn;

    if((ratio == 0) || iterations ==0){
        toReturn = Rationnels(0,1);
    }else if(abs(ratio)<1){
        toReturn = getRationnel(1/ratio, iterations);
        toReturn.reverse();
    }else{
        int whole = floor(ratio);
        toReturn = Rationnels(whole,1)+getRationnel(ratio-whole,iterations-1);
    }

    return toReturn;
}

Rationnels Rationnels::reverse(){

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    long long temp = denominator;
    this->denominator = this->numerator;
    this->numerator = temp;

    return *this;
}

Rationnels Rationnels::exponentielle() {
    return Rationnels(exp((float) numerator/denominator));
}


Rationnels Rationnels::logarithme() {
    if (numerator==0 || denominator==0){
       throw std::domain_error("Impossible to do the logaritme of zero");
    }

    //assert (() && "impossible de calculer le logarithme de quelque chose de négatif");

    if (numerator<0 || denominator<0){
       throw std::domain_error("the logarithm of a negative number doesn't exist");
    }

    return Rationnels(log(numerator)-log(denominator));
}


Rationnels Rationnels::cosinus(){
    if (numerator==0){
        return 1;
    }

    float k = double(numerator)/double(denominator);

    return Rationnels(cos(k));
}

Rationnels Rationnels::sinus() {
    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    return Rationnels(sin(k));
}

Rationnels Rationnels::tangente() {
    
    if (3.14<=numerator<=3.15 && denominator==2){
        throw std::domain_error("tan(pi/2) doesn't exist");
    }

    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    

    return Rationnels(tan(k));
}



std::ostream& operator<< (std::ostream& stream, const Rationnels& v){
    std::cout<<v.numerator<<"/"<<v.denominator<<std::endl;
    return stream;
}


Rationnels Rationnels::absolue(){


    if (numerator<0){
        return Rationnels(-numerator,denominator);
    }

    else if (denominator<0){
        return Rationnels(numerator,-denominator);
    }

    else{
        return Rationnels(numerator,denominator);
    }
    
}

int Rationnels::whole(){
    int k = numerator/denominator;

    return k;
}

Rationnels Rationnels::floatProduct(float F){

    return *this * Rationnels(F);


}

Rationnels Rationnels::floatDivide(float F){

    return *this / Rationnels(F);
}
