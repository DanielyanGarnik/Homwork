#include <iostream>
int main (){
    int a = 4;
    int& b = a;
    int * c =&b;
        * c = 6;
    int** p  = &c;
    std::cout<< &a<<std::endl;
    std::cout<< &b<<std::endl;	    ;
    std::cout<< &c<<std::endl; 
    std::cout<< a <<std::endl;  
    std::cout<< b <<std::endl;
    std::cout<< &c <<std::endl;
    std::cout<< p <<std::endl;
        


    return 0;



}
