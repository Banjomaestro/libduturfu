#include "../include/Rationnels.hpp"

template<typename T>
void Rationnels<T> :: reverse(){
    T temporary = numerator;
    this->numerator = denominator;
    denominator = temporary;
}

template<typename T>
Rationnels<T> ::Rationnels(T deno, T nume){

    denominator = deno;
    numerator = nume;

}