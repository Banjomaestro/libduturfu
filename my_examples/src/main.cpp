#include <stdlib.h>
#include <iostream>
#include "Rationnels.hpp"
#include <functional>

int main(){
    std::cout << "examples" <<std::endl;


//Rationnels
    Rationnels<float> test1 = Rationnels<float>(0,3);
    Rationnels<float> test2 = Rationnels<float>(5,2);
    Rationnels<float> test3 = Rationnels<float>(1,6);
    Rationnels<float> test4 = Rationnels<float>(3,9);
    Rationnels<float> test5= Rationnels<float>(-1,2);
    Rationnels<float> test6= Rationnels<float>(16,25);
    Rationnels<float> test7 = Rationnels<float>(1,1);
    Rationnels<float> test = Rationnels<float>(M_PI,2);
    Rationnels<float> test8 = Rationnels<float>(M_PI,1);
    Rationnels<float> test_vide;

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
    std::cout<<"Logarithme "<<Rationnels<float>(1,3).logarithme()<<std::endl;

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

//exponentielle2
    std::cout<<"exp2 : "<<test1.exponentielle2()<<std::endl;
    std::cout<<"exp2 : "<<test7.exponentielle2()<<std::endl;

//reverse
<<<<<<< HEAD
    std::cout<<"reverse "<<!test3;
=======
    std::cout<<"reverse "<<test3.reverse()<<std::endl;
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7


//exceptions

    try{
        Rationnels<float> div_zero = Rationnels<float>(1,0);
        std::cout<<div_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<float> log_zero = Rationnels<float>(0,1).logarithme();
        std::cout<<log_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<float> tan_pi2 = Rationnels<float>(M_PI,1).tangente();
        std::cout<<tan_pi2<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
<<<<<<< HEAD
        Rationnels reverse_zero = !test1;
=======
        Rationnels<float> reverse_zero = test1.reverse();
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7
        std::cout<<reverse_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<float> inv_zero = !test1;
        std::cout<<inv_zero<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Rationnels<float> log_neg = Rationnels<float>(-1,1).logarithme();
        std::cout<<log_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    try{
        Rationnels<float> squareroot_neg = Rationnels<float>(-1,1).squareRoot();
        std::cout<<squareroot_neg<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    


    return 0;
}