#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include "Operations.hpp"

int main(){
    std::cout << "lul" <<std::endl;
    Operations test;
    Rationnels testo = Rationnels(1,3);
    Rationnels testi = Rationnels(0.33);
    std::cout<<std::endl;
    std::cout<<"testi"<<testi;
    std::cout<<"testo"<<testo;
    testo.reverse();
    std::cout<<"testo"<<testo;
    //Rationnels<int> test1 = Rationnels<int>(2,3);
    std::cout<<"testo"<<testo*testo;
    std::cout<<"testo"<<testo+testo;
    std::cout<<"testo"<<testo-Rationnels(1,4);


    return 0;
}