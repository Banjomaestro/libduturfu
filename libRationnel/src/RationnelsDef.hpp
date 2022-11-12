#include "include/Rationnels.hpp"

template<typename T>
void Rationnels<T> :: reverse(){
    T temporary = numerator;
    this->numerator = denominator;
    denominator = temporary;
}