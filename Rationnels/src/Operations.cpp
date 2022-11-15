#include "../include/Operations.hpp"


template<typename T, typename F>
Rationnels<T> getRationnel(F ratio, int iterations){
    if(ratio == 0 || iterations ==0){
        return Rationnels<T>(0,1);
    }else if(ratio<1){
        Rationnels<T> toReturn = getRationnel(1/ratio, iterations);
        toReturn.reverse();
        return toReturn;
    }else if(ratio>=1){
        int whole = floor(ratio);
        return Rationnels<T>(whole,1)+getRationnel(ratio-whole,iterations-1);
    }
}