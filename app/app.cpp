#include "app.h"
#include <format>
#include <cmath>

namespace vsite::oop::p1 {
    
    double f1(int a,int b){   
        return pow(a,b);
    }
    bool f2(bool b){
        return !b;
         
     }
    int f3(int a,int b,int c,int d){
        return a+b+c+d;
    }
    std::string f4(int a){
       return "int";
    }
    std::string f4(bool b){
        return "bool";
    }
    std::string f4(double a){
        return "double";
    }
    bool f5(std::string &s,int a){
        
        s+=std::to_string(a%10);
        if(a<=0)
           return false;
        return true;
        
    }
    void f6(int a,int b,std::ostream& ss){

            ss<<a<<"\n"<<b;


    }

  


    
    


/*
* function implementations
*/


} // namespace
