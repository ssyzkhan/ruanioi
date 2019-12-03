#include<iostream>
#include<cstdio>
using namespace std;
int a[11],i,j,s,sp1;
bool p;
int main(){
    sp1=1;
    a[1]=2;
    j=2;
    while(sp1<10){
        j=j+1;
        p=true;
        for(i=2;i<=j-1;++i)
            if(j%i==0)p=false;
        if(p){
            sp1=sp1+1;
            a[sp1]=j;
        }
    }
        j=2;
        p=true;
        while(p){
            s=1;
            for(i=1;i<=j;++i)s=s*a[i];
            s=s+1;
            for(i=2;i<=s-1;++i)
                if(s%i==0)p=false;
            j=j+1;
        }
    
    printf("%d\n\n",s);
    return 0;
}