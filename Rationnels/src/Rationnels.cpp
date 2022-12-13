#include "../include/Rationnels.hpp"

Rationnels ::Rationnels(long nume, long deno){

    if (deno==0){
        throw std::domain_error("divide by zero");
    }

    const long gcd = std::__algo_gcd(nume,deno);
    numerator = nume/gcd;
    denominator = deno/gcd;


}


Rationnels ::Rationnels(){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}

Rationnels ::Rationnels(float ratio){

    *this = getRationnel(ratio,100);

}



Rationnels Rationnels::operator+(const Rationnels rationnel){

    if (numerator==0){
        return rationnel;
    }

    if (rationnel.numerator==0){
        return *this;
    }

    const long gcd = std::__algo_gcd(rationnel.denominator,denominator);
    int newRatioDeno = rationnel.denominator/gcd;
    int newDeno = denominator/gcd;

    return Rationnels((numerator*newRatioDeno + newDeno*rationnel.numerator),newDeno*rationnel.denominator);
}




Rationnels Rationnels::operator*(const Rationnels rationnel){

    if (numerator==0||rationnel.numerator==0 ){
        return 0;
    }

    return Rationnels((numerator*rationnel.numerator),(denominator*rationnel.denominator));
}


Rationnels Rationnels::operator!(){

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    if (numerator==0){
        return 0;
    }

    return Rationnels(denominator,numerator);
}


Rationnels Rationnels::operator/(const Rationnels rationnel){

    if (numerator==0||rationnel.denominator==0 ){
        return 0;
    }

    else if (rationnel.numerator/rationnel.denominator==numerator/denominator){
        return 1;
    }

    return Rationnels(numerator*rationnel.denominator,denominator*rationnel.numerator);
}

Rationnels Rationnels::operator-(const Rationnels rationnel){

    if (rationnel.numerator/rationnel.denominator==numerator/denominator){
        return 0;
    }
    return Rationnels((numerator*rationnel.denominator - denominator*rationnel.numerator),denominator*rationnel.denominator);

}

Rationnels Rationnels::operator-(){
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

    return getRationnel(pow(numerator,n),pow(denominator, n));

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

    if(ratio<0){
        return -toReturn;
    }else
        return toReturn;
}


Rationnels Rationnels::reverse(){

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    int temp = denominator;
    this->denominator = numerator;
    this->numerator = temp;
}


Rationnels Rationnels::exponentielle() {
    
    // int k = R.denominator*log(2) - log(2)/2;
    // Rationnels r = (R.numerator-k*log(2)*R.denominator)/R.denominator;
 
    // return Rationnels(exponentielle(r)*pow(2,k));

    float result=1/1;
    int nbiter=12;
    for(unsigned int n=nbiter; n>=1; n--){
        result=1+ (numerator/(n*denominator)) *result;
    }
    return getRationnel(result,50);
}


Rationnels Rationnels::logarithme() {
    if (numerator==0 || denominator==0){
       throw std::domain_error("Impossible de faire logarithme de zéro");
    }

    assert (() && "impossible de calculer le logarithme de quelque chose de négatif");

    return Rationnels(log(numerator)-log(denominator));
}


Rationnels Rationnels::cosinus(){
    if (numerator==0){
        return 1;
    }

    float k = double(numerator)/double(denominator);

    return getRationnel(cos(k),50);
}

Rationnels Rationnels::sinus() {
    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    return getRationnel(sin(k),50);
}

Rationnels Rationnels::tangente() {
    
    if (3.14<=numerator<=3.15 && denominator==2){
        throw std::domain_error("tan(pi/2) n'existe pas");
    }

    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    

    return getRationnel(tan(k),50);
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

int Rationnels::partie_entiere(){
    
    int k = numerator/denominator;

    return k;
}

Rationnels Rationnels::virgule_flottante_Ratio(float F){

    Rationnels R = F*numerator/denominator;

    return R;


}

Rationnels Rationnels::Ratio_virgule_flottante(float F){

    Rationnels R = numerator*F/denominator;

    return R;
}
