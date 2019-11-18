#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a,b,c,d,sum;
int main(){
    cin>>a>>b>>c>>d;
    a=a%23;
    b=b%28;
    c=c%33;
    sum = a*5544+b*14421+c*1288-d;
    sum += 21252;
    sum %= 21252;
    if(sum==0)
        sum =21252;
    cout<<sum<<endl;
    return 0;
}