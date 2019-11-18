#include<iostream>
using namespace std;
int i,j,k,a[101];
int main(){
    for(i=0;i<=100;++i)a[i]=i;
    for(k=5;k>=2;--k){
        for(i=1;i<=100;++i)if(i%k==0)a[i]=0;
        for(i=1;i<=99;++i)
            for(j=1;j<=100-i;++j)
                if(a[j]>a[j+1]){
                    a[j]=a[j]+a[j+1];
                    a[j+1]=a[j]-a[j+1];
                    a[j]=a[j]-a[j+1];
                }
    }
    j=1;
    while(a[j]==0&&j<100)j=j+1;
    for(i=j;i<=100;++i)a[0]=a[0]+a[i];
    cout<<a[0];
}