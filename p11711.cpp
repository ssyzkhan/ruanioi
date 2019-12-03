#include<stdio.h>
long g(long k){
    if(k<=1)return k;
    return (2022*g(k-1)+2003*g(k-2))%2005;
}
int main(){
    long n;
    scanf("%ld",&n);
    printf("%ld\n",g(n));
    return 0;
}