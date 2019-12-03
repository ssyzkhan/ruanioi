#include<iostream>
#include<cstdio>
using namespace std;
int a[21],i,j,p,n,q,s;
int main(){
    scanf("%d%d%d",&p,&n,&q);
    j=21;
    while(n>0){
        j=j-1;
        a[j]=n%10;
        n=n/10;
    }
    s=0;
    for(i=j;i<=20;++i)s=s*p+a[i];
    printf("%d\n",s);
    j=21;
    while(s>0){
        j=j-1;
        a[j]=s%q;
        s=s/q;
    }
    for(i=j;i<=20;++i)printf("%d",a[i]);
    printf("\n");
    return 0;
}