#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include <functional>

int main(){
    std::cout << "examples" <<std::endl;


//Rationnels
    Rationnels test1 = Rationnels(0,3);
    Rationnels test2 = Rationnels(5,2);
    Rationnels test3 = Rationnels(1,6);
    Rationnels test4 = Rationnels(3,9);
    Rationnels test5= Rationnels(-1,2);
    Rationnels test6= Rationnels(16,25);
    Rationnels test7 = Rationnels(1,1);
    Rationnels test = Rationnels(M_PI,2);
    Rationnels test8 = Rationnels(M_PI,1);
    Rationnels test_vide;

//cout
    std::cout<<std::endl;
    std::cout<<"test7 : "<<test7;
    std::cout<<"test2 : "<<test3;
    std::cout<<"test3 : "<<test3;
    std::cout<<"test4 : "<<test4<<std::endl;

//Opérations

//Multiply
    std::cout<<"test3*test3 : "<<test3*test3;
    std::cout<<"test1*test3 : "<<test1*test3<<std::endl;

//Divide
    std::cout<<"test3/test4 : "<<test3/test4;
    std::cout<<"test3/test3 : "<<test3/test3<<std::endl;

//add
    std::cout<<"test3+test3 : "<<test3+test3;
    std::cout<<"tesst5+test5 : "<<test5+test5;
    std::cout<<"test5 + test3 : "<<test5+test3<<std::endl;

//substract
    std::cout<<"test3-test3 : "<<test3-test3;
    std::cout<<"test5-test1 : "<<test5-test1<<std::endl;

//Unary minus
    std::cout<<"-test3 : "<<-test3;
    std::cout<<"-test1 : "<<-test1;
    std::cout<<"-test5 : "<<-test5<<std::endl;

//whole
    std::cout<<"whole test3 "<<test3.whole()<<std::endl;
    std::cout<<"whole test1 "<<test1.whole()<<std::endl;
    std::cout<<"whole test2 "<<test2.whole()<<std::endl;

//power
    std::cout<<"Power"<<test3.power(2)<<std::endl;
    std::cout<<"Power"<<test2.power(2)<<std::endl;
    std::cout<<"Power"<<test1.power(2)<<std::endl;

//reverse
    std::cout<<"Reverse "<< !test3 <<std::endl;

//multiply rational by float
    std::cout<<"test3 x float "<< test3.floatProduct(0.5) <<std::endl;
    std::cout<<"test1 x float "<< test1.floatProduct(0.5) <<std::endl;
    std::cout<<"test5 x float "<< test5.floatProduct(0.5) <<std::endl;

//Divide rational by float
    std::cout<<"Float / ratio "<< test3.floatDivide(0.5) <<std::endl;
    std::cout<<"Float / ratio "<< test5.floatDivide(0.5) <<std::endl;

//convert float to ratio
    std::cout<<"Float to ratio "<< test_vide.getRationnel(0.5,50) <<std::endl;
    std::cout<<"Float to ratio "<< test_vide.getRationnel(-0.5,50) <<std::endl;

//Logarithme
    std::cout<<"Logarithme "<<Rationnels(1,3).logarithme()<<std::endl;

//Squareroot
    std::cout<<"Squareroot test6 "<<test6.squareRoot()<<std::endl;
    std::cout<<"Squareroot test1 "<<test1.squareRoot()<<std::endl;
    std::cout<<"Squareroot test7 "<<test7.squareRoot()<<std::endl;

//Cos,Sin,tan
    std::cout<<"cosinus "<<test.cosinus()<<std::endl;
    std::cout<<"sinus "<<test.sinus()<<std::endl;
    std::cout<<"tangente "<<test8.sinus()<<std::endl;

//absolute value
    std::cout<<"absolue test5 "<<test5.absolue()<<std::endl;
    std::cout<<"absolue test1 "<<test1.absolue()<<std::endl;

//exponentielle
    std::cout<<"exponentielle "<<test7.exponentielle()<<std::endl;

//reverse
    std::cout<<"reverse "<<test3.reverse();


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
        Rationnels reverse_zero = test1.reverse();
        std::cout<<reverse_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels inv_zero = !test1;
        std::cout<<inv_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels log_neg = Rationnels(-1,1).logarithme();
        std::cout<<log_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    try{
        Rationnels squareroot_neg = Rationnels(-1,1).squareRoot();
        std::cout<<squareroot_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    


    return 0;
}