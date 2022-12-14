#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include <functional>

int main(){
    std::cout << "lul" <<std::endl;
    //Operations test;

//Rationnels
    Rationnels testo = Rationnels(1,3);
    Rationnels testa = Rationnels(0,3);
    Rationnels testaa = Rationnels(0,2);
    Rationnels teste= Rationnels(-1,-2);
    Rationnels testu= Rationnels(16,25);
    Rationnels testi = Rationnels(1,1);
    Rationnels test = Rationnels(M_PI,2);
    std::cout<<std::endl;
    std::cout<<"testi : "<<testi;
    std::cout<<"testo : "<<testo;
    //testo.reverse();
    std::cout<<"testo "<<testo;

//Opérations
    std::cout<<"testo*testo : "<<testo*testo;
    std::cout<<"testo+testo : "<<testo+testo;
    std::cout<<"testo-testo : "<<testo-testo;
    std::cout<<"testo-ratio : "<<testo-Rationnels(1,4);
    std::cout<<"testo-ratio : "<<Rationnels(1.75561);
    std::cout<<"-testo : "<<-testo;
    std::cout<<"testo/testo : "<<testo/testo;

//fonctions
    std::cout<<"partie entière "<<testo.partie_entiere()<<std::endl;
    std::cout<<"puissance "<<testo.power(0)<<std::endl;
    std::cout<<"reverse "<< !testo <<std::endl;
    std::cout<<"ratio x float "<< testo.Ratio_virgule_flottante(0.5) <<std::endl;
    std::cout<<"float x ratio "<< testo.virgule_flottante_Ratio(0.5) <<std::endl;
    std::cout<<"float to ratio "<< testa.getRationnel(0.5,50) <<std::endl;
    std::cout<<"logarithme "<<Rationnels(1,3).logarithme()<<std::endl;
    std::cout<<"racine  "<<testu.squareRoot()<<std::endl;
    std::cout<<"cosinus "<<test.cosinus()<<std::endl;
    std::cout<<"absolue "<<teste.absolue()<<std::endl;

    std::cout<<"exponentielle "<<testi.exponentielle()<<std::endl;

//exceptions

    try{
        Rationnels div_zero = Rationnels(1,0);
        std::cout<<div_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels log_zero = Rationnels(0,1).logarithme();
        std::cout<<log_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels tan_pi2 = Rationnels(0,2).tangente();
        std::cout<<tan_pi2<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels reverse_zero = testaa.reverse();
        std::cout<<reverse_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels inv_zero = !testaa;
        std::cout<<inv_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels log_neg = Rationnels(1,-1).logarithme();
        std::cout<<log_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    


    return 0;
}