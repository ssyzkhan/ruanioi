#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=(a*(a*a))+1;
    if(b%3==0)b=b/3;
    if(b%5==0)b=b/5;
    if(b%7==0)b=b/7;
    if(b%9==0)b=b/9;
    if(b%11==0)b=b/11;
    if(b%13==0)b=b/13;
    if(b%15==0)b=b/15;
    printf("%d\n",(100*a-b)/2);
    return 0;
}