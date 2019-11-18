#include<iostream>
#include<cstring>
using namespace std;
int a,x,y,ok1,ok2;
int main(){
    a=100;
    x=20;
    y=20;
    ok1=5;
    ok2=0;
    if((x>y)||((y!=20)&&(ok1==0))&&(ok2!=0))
        a=1;
    else if((ok1!=0)&&(ok2==0))
        a=-1;
    else
        a=0;
    cout<<a<<endl;
    return 0;
}