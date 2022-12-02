#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include "Operations.hpp"

int main(){
    std::cout << "lul" <<std::endl;
    //Operations test;
    Rationnels testo = Rationnels(1,3);
    Rationnels testa;
    Rationnels teste= Rationnels(-1,-2);
    Rationnels testu= Rationnels(16,25);
    Rationnels testi = Rationnels(1,1);
    Rationnels test = Rationnels(1,3);
    std::cout<<std::endl;
    std::cout<<"testi : "<<testi;
    std::cout<<"testo : "<<testo;
    //testo.reverse();
    std::cout<<"testo "<<testo;
    //Rationnels<int> test1 = Rationnels<int>(2,3);
    std::cout<<"testo*testo : "<<testo*testo;
    std::cout<<"testo+testo : "<<testo+testo;
    std::cout<<"testo-testo : "<<testo-testo;
    std::cout<<"testo-ratio : "<<testo-Rationnels(1,4);
    std::cout<<"-testo : "<<-testo;
    std::cout<<"testo/testo : "<<testo/testo;

    // Rationnels deRatio = Rationnels(0.3);
    // std::cout<<"testing tests" <<std::endl<<std::endl;
    // std::cout<<0.3<<"   =   "<<(float) deRatio.numerator/deRatio.denominator<<std::endl;
    // std::cout<<deRatio.numerator<<std::endl;
    // std::cout<<deRatio.denominator<<std::endl;

    std::cout<<"partie entière "<<testo.partie_entiere()<<std::endl;
    std::cout<<"puissance "<<testo.power(2)<<std::endl;
    std::cout<<"reverse "<< !testo <<std::endl;
    std::cout<<"ratio x float "<< testo.Ratio_virgule_flottante(0.5) <<std::endl;
    std::cout<<"float x ratio "<< testo.virgule_flottante_Ratio(0.5) <<std::endl;
    std::cout<<"float to ratio "<< testa.getRationnel(0.5,50) <<std::endl;
    std::cout<<"logarithme "<<test.logarithme()<<std::endl;
    std::cout<<"racine  "<<testu.squareRoot()<<std::endl;
    //std::cout<<"cosinus "<<teste.cosinus()<<std::endl;
    std::cout<<"absolue "<<teste.absolue()<<std::endl;
    std::cout<<"exponentielle "<<testi.exponentielle()<<std::endl;


    return 0;
}