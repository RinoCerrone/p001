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
    int f3(int a=1,int b=2,int c=3,int d=4){
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
        if(a>0)return true;
    }
    std::string f6(int a,int b,std::ostream&){


    }

  


    
    


/*
* function implementations
*/


} // namespace
