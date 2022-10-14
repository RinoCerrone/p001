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
    string f4(int a){
       return typeid(a).name();
    }
    string f4(bool b){
        return typeid(b).name();
    }
    string f4(double a){
        return typeid(a).name();
    }
    bool f5(string s,int a){
        if(a>0)return true;
    }
    string f6(int a,int b,string s){


    }

  


    
    


/*
* function implementations
*/


} // namespace
