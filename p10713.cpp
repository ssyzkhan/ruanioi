#include<iostream>
using namespace std;
void fun(int *a,int *b){
    int *k;
    k=a;a=b;b=k;
}
int main(){
    int a=3,b=6,*x=&a,*y=&b;
    fun(x,y);
    cout<<a<<","<<b<<endl;
    return 0;
}