#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <cassert>



// Doxygen menu
/// \version 0.1
/// \mainpage
/// \image html 50.jpg
/// \tableofcontents
/// \section instroduction_sec What for?
/// Rationnels is a super tool. In theory, rational number operations do not imply any numerical approximation, and are therefore very different. In practice, the numerator and the denominator are two integers on a finite number of bits, which implies limits on the precision of the operations performed. The data structure for a rational number is simply a numerator and a denominator, two integers.
/// \section install_bigsec How to install
/// \subsection dependencies_sec Dependecies
/// \li nothing
/// \li Doxygen (if you want the documentation)
/// \subsection install_sec Install with cmake (Linux / Mac)
/// \li go to main dir
/// \li delete build directory
/// \li mkdir build
/// \li cd build
/// \li cmake ..
/// \li make
/// \li if Doxygen installed: make html
/// \li The documentation is located in :
/// 	- [path to build]/doc/doc-doxygen/html/index.html or 
/// 	- or [path to build]/INTERFACE/doc/doc-doxygen/html/index.html



/// \class Rationnels
/// \brief Class defining a rational for algebra operations.


template <typename T>

class Rationnels {
        
    public:

        /// \brief Composant of a rational
        long long numerator;
        long long denominator;

        /// \brief Default constructor
        Rationnels();

        Rationnels(float ratio);

        /// \brief Constructor of a rational composed of a numerator and a denominator
        /// \param num : The numerator of the rational
        /// \param deno : The denominator of the rational  
        Rationnels(long nume, long deno);

        /// \brief Operator to add 2 rationales
        /// \param rationnel : Rational to add to the calling rational
        /// \return The sum of the current rationnal and the argument rationnal
        Rationnels operator+(const Rationnels rationnel);
        
        /// \brief Operator to make the product of 2 rationals
        /// \param rationnel : Rational to multiply to the calling rational
        /// \return The product of the current rationnal and the argument rationnal
        Rationnels operator*(const Rationnels rationnel);
        
        /// \brief Inverse of a rational
        /// \return The inverse of a rational
        Rationnels operator!();

        /// \brief Operator to substract a rationnal to *this
        /// \param rationnel : Rational to substract to the calling rational
        /// \return The subtraction of the current rationnal and the argument rationnal
        Rationnels operator-(const Rationnels rationnel);

        /// \brief Unary minus
	    /// \return The minus the calling rationnal 
        Rationnels operator-();

        /// \brief Operator to divide a rationnal to *this
        /// \param rationnel : Rational to divide to the calling rational
        /// \return The division of the current rationnal and the argument rationnal
        Rationnels operator/(const Rationnels rationnel);

        /// \brief Operator to compare the equality of 2 rationnels
	    /// \param  R: Rationnel to compare to the calling rationnel
	    /// \return True if the two rationnels are equal
        bool operator==(const Rationnels &R);

        /// \brief Operator to compare the inequality of 2 rationals
	    /// \param  R: Rationnel to compare to the calling rational
	    /// \return True if the two rationals are not equal
        bool operator!=(const Rationnels &R);

        /// \brief Operator to compare the inferiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals lower or equal to the calling vector       
        bool operator<=(Rationnels R);

        /// \brief Operator to compare the strict superiority of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals strictly higher to the calling vector 
        bool operator<(Rationnels R);

        /// \brief Operator to compare the strict superiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals strictly higher to the calling vector
        bool operator>(Rationnels R);

        /// \brief Operator to compare the superiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals superior or equal to the calling vector 
        bool operator>=(Rationnels R);

        /// \brief Compute the squareroot of the numerator divided by the square root of the denominator (the rational has to be positive)
	    /// \return The squareroot of the current rational
        Rationnels squareRoot();

        /// \brief Compute the power of the numerator divided by the power of the denominator
	    /// \param  n: The power 
	    /// \return The power of a rationnal
        Rationnels power(T n);

        /// \brief Transform a real into a rational
	    /// \param  ratio: a real number to convert to rational
        /// \param  iterations: Number of recursive calls remaining
	    /// \return A rationnal
        Rationnels getRationnel(T ratio, int iterations);

        Rationnels getRationnelMinus(T ratio, int iterations);

        /// \brief Compute the exponentielle of a rational
	    /// \return The exponentielle of a rational
        Rationnels exponentielle();

        Rationnels exponentielle2();

        /// \brief Compute the rational of the logarithme of the numerator minus the logarithme of the denominator (the rational has to be stricly positive)
	    /// \return  The logarithme of a rational
        Rationnels logarithme();

        /// \brief Transform a ratio into a float to compute the cosinus of a float
	    /// \return The rational of the cosinus of a float
        Rationnels cosinus();

        /// \brief Transform a ratio into a float to compute the sinus of a float
	    /// \return The rational of the sinus of a float
        Rationnels sinus();

        /// \brief Transform a ratio into a float to compute the tangente of a float
	    /// \return The rational of the tangente of a float
        Rationnels tangente();

        /// \brief Compute minus the numerator or the denominator if one of them is negative
	    /// \return The absolute value of the numerator divided by the absolute value of the denominator
        Rationnels absolue();

        /// \brief Transform the rational into the lower int 
	    /// \return The whole of a rational
        int whole();

        /// \brief Compute the product of a rational and the rational of a float 
        /// \param  F: Float to multiply with the current rational 
	    /// \return The product of a float and a rational
        Rationnels floatProduct(T F);

        /// \brief Compute the division of a rational and the rational of a float 
        /// \param  F: Float to divide with the current rational 
	    /// \return The division of a float and a rational
        Rationnels floatDivide(T F);
        
        
};

/// \brief Overload the operator << for rational
/// \param stream : Input stream
/// \param v : The rational to output
/// \return The output stream containing the rational data

template <typename T>
std::ostream& operator<< (std::ostream& stream, const Rationnels<T>& v){
    std::cout<<v.numerator<<"/"<<v.denominator<<std::endl;
    return stream;
}

template <typename T>
Rationnels<T> ::Rationnels(long nume, long deno){

    if (deno==0){
        throw std::domain_error("divide by zero");
    }

    const long gcd = std::__algo_gcd(nume,deno);
 
    this->numerator = nume/gcd;
    this->denominator = deno/gcd;


}

template <typename T>
Rationnels<T> ::Rationnels(){

    /*int gcd = std::__gcd(nume,deno);
    denominator = deno/gcd;
    numerator = nume/gcd;*/
}

template <typename T>
Rationnels<T> ::Rationnels(float ratio){

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


template <typename T>
Rationnels<T> Rationnels<T>::operator+(const Rationnels<T> rationnel) {

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



template <typename T>
Rationnels<T> Rationnels<T>::operator*(const Rationnels<T> rationnel) {

    if (numerator==0||rationnel.numerator==0 ){
        return 0;
    }

    return Rationnels((numerator*rationnel.numerator),(denominator*rationnel.denominator));
}


template <typename T>
Rationnels<T> Rationnels<T>::operator!(){

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    if (numerator==0){
        return 0;
    }

    return Rationnels(denominator,numerator);
}

template <typename T>
Rationnels<T> Rationnels<T>::operator/(const Rationnels<T> rationnel) {

    if (this->numerator==0 ){
        return 0;
    }

    Rationnels temp = rationnel;
    temp.reverse();

    return *this*temp;
}

template <typename T>
Rationnels<T> Rationnels<T>::operator-(const Rationnels<T> rationnel){

    if (rationnel.numerator/rationnel.denominator==numerator/denominator){
        return 0;
    }

    const long gcd = std::__algo_gcd(rationnel.denominator,denominator);
    int newRatioDeno = rationnel.denominator/gcd;
    int newDeno = denominator/gcd;

    return Rationnels((numerator*newRatioDeno - newDeno*rationnel.numerator),newDeno*rationnel.denominator);

}

template <typename T>
Rationnels<T> Rationnels<T>::operator-(){
    return Rationnels(-this->numerator,this->denominator);    
}

template <typename T>
bool Rationnels<T>::operator==(const Rationnels<T> &R){

    if (numerator == R.numerator && denominator == R.denominator){
        return true;
    }
    
    else{
        return false;
    }
}

template <typename T>
bool Rationnels<T>::operator!=(const Rationnels<T> &R){

    if (numerator != R.numerator || denominator != R.denominator){
        return true;
    }
    
    else{
        return false;
    }
}

template <typename T>
bool Rationnels<T>::operator<=(Rationnels<T> R){
    if (numerator*R.denominator<= R.numerator*denominator){
        return true;
    }
    
    else{
        return false;
    }
}

template <typename T>
bool Rationnels<T>::operator>=(Rationnels<T> R){
    if (numerator*R.denominator>= R.numerator*denominator){
        return true;
    }

    else{
        return false;
    }
    
}

template <typename T>
bool Rationnels<T>::operator<(Rationnels<T> R){
    if (numerator*R.denominator< R.numerator*denominator){
        return true;
    }
    
    else{
        return false;
    }
}

template <typename T>
bool Rationnels<T>::operator>(Rationnels<T> R){
    if (numerator*R.denominator> R.numerator*denominator){
        return true;
    }
    else{
        return false;
    }
}


template <typename T>
Rationnels<T> Rationnels<T>::squareRoot(){

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

template <typename T>
Rationnels<T> Rationnels<T>::power(T n){

    if (numerator==0){
        return 0;
    }

    else if(n==0){
        return 1;
    }

    return Rationnels(pow(numerator,n),pow(denominator, n));

}

template <typename T>
Rationnels<T> Rationnels<T>::getRationnel(T ratio, int iterations){

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

template <typename T>
Rationnels<T> Rationnels<T>::reverse(){

    if (numerator==0){
        throw std::domain_error("divide by zero");
    }

    long long temp = denominator;
    this->denominator = this->numerator;
    this->numerator = temp;

    return *this;
}

template <typename T>
Rationnels<T> Rationnels<T>::exponentielle() {
    return Rationnels(exp((float) numerator/denominator));
}

template <typename T>
Rationnels<T> Rationnels<T>::exponentielle2(){

    float result=1;
    int nbiter=12;
    for (unsigned int n=nbiter; n>=1; n--){
        result = 1+(numerator*n*result)/denominator;
    }

    return getRationnel(result,50);
    
}

template <typename T>
Rationnels<T> Rationnels<T>::logarithme() {
    if (numerator==0 || denominator==0){
       throw std::domain_error("Impossible to do the logaritme of zero");
    }


    if (numerator<0 || denominator<0){
       throw std::domain_error("the logarithm of a negative number doesn't exist");
    }

    return Rationnels(log(numerator)-log(denominator));
}

template <typename T>
Rationnels<T> Rationnels<T>::cosinus(){
    if (numerator==0){
        return 1;
    }

    float k = double(numerator)/double(denominator);

    return Rationnels(cos(k));
}

template <typename T>
Rationnels<T> Rationnels<T>::sinus() {
    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    return Rationnels(sin(k));
}

template <typename T>
Rationnels<T> Rationnels<T>::tangente() {
    
    if (3.14<=numerator<=3.15 && denominator==1){
        throw std::domain_error("tan(pi/2) doesn't exist");
    }

    if (numerator==0){
        return 0;
    }

    float k = double(numerator)/double(denominator);

    

    return Rationnels(tan(k));
}


template <typename T>
Rationnels<T> Rationnels<T>::absolue(){


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

template <typename T>
int Rationnels<T>::whole(){
    int k = numerator/denominator;

    return k;
}

template <typename T>
Rationnels<T> Rationnels<T>::floatProduct(T F){

    return *this * Rationnels(F);


}

template <typename T>
Rationnels<T> Rationnels<T>::floatDivide(T F){

    return *this / Rationnels(F);
}