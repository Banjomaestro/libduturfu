#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include <functional>

int main(){
    std::cout << "examples" <<std::endl;

//Rationnels
    Rationnels<int> test1 = Rationnels<int>(0,3);
    Rationnels<int> test2 = Rationnels<int>(5,2);
    Rationnels<int> test3 = Rationnels<int>(1,6);
    Rationnels<int> test4 = Rationnels<int>(3,9);
    Rationnels<int> test5= Rationnels<int>(-1,2);
    Rationnels<int> test6= Rationnels<int>(16,25);
    Rationnels<int> test7 = Rationnels<int>(1000,100);
    Rationnels<int> test = Rationnels<int>(314,200);
    Rationnels<int> test8 = Rationnels<int>(314,100);
    Rationnels<int> test_vide;

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
    std::cout<<"Float to ratio "<< Rationnels<int>(77.158416748046875) <<std::endl;

//Logarithme
    std::cout<<"Logarithme "<<Rationnels<int>(1,3).logarithme()<<std::endl;

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
    std::cout<<"exponentielle "<<test1.exponentielle()<<std::endl;

//reverse
    std::cout<<"reverse "<<!test3;

//exceptions

    try{
        Rationnels<int> div_zero = Rationnels<int>(1,0);
        std::cout<<div_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<int> log_zero = Rationnels<int>(0,1).logarithme();
        std::cout<<log_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<int> tan_pi2 = Rationnels<int>(314,100).tangente();
        std::cout<<tan_pi2<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<int> reverse_zero = !test1;
        std::cout<<reverse_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<int> inv_zero = !test1;
        std::cout<<inv_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<int> log_neg = Rationnels<int>(-1,1).logarithme();
        std::cout<<log_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    try{
        Rationnels<int> squareroot_neg = Rationnels<int>(-1,1).squareRoot();
        std::cout<<squareroot_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
    return 0;
}