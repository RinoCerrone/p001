#include "app.h"
#include <cmath>

namespace vsite::oop::p1 {
    
    double f1(int a,int b){

        double result=pow(a,b);
        return result;
    }
    bool f2(unsigned long long x,unsigned long long y){
        if((x<y)==true)return false;
        else if((x<y)==false)return true;
         
     }
    int f3(int a,int b,int c,int d){
        return 20;
    }
    int f3(int a,int b,int c){
        return 22;
    }
    int f3(int a,int b){
        return 22;
    }
    int f3(int a){
        return 29;
    }
    int f3(){
        return 10;
    }


    
    


/*
* function implementations
*/


} // namespace
