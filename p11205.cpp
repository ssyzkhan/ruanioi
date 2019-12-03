#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double d1,d2,x,Min;
int main(){
    Min=10000;
    x=3;
    while(x<15){
        d1=sqrt(9+(x-3)*(x-3));
        d2=sqrt(36+(15-x)*(15-x));
        if(d1+d2<Min)Min=d1+d2;
        x=x+0.001;
    }
    printf("%10.2lf\n",Min);
    return 0;
}