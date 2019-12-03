#include<iostream>
#include<cstdio>
using namespace std;
int a[21],i,j,k,n,l0,l1,lk;
int main(){
    scanf("%d%d",&n,&k);
    for(i=0;i<=n-1;++i)a[i]=i+1;
    a[n]=a[n-1];
    l0=n-1;
    lk=n-1;
    for(i=1;i<=n-1;++i){
        l1=l0-k;
        if(l1<0)l1=l1+n;
        if(l1==lk){
            a[l0]=a[n];
            lk=lk-1;
            a[n]=a[lk];
            l0=lk;
        }else{
            a[l0]=a[l1];
            l0=l1;
        }
    }
    a[l0]=a[n];
    for(i=0;i<=n-1;++i)printf("%4d",a[i]);
    printf("\n");
    return 0;
}