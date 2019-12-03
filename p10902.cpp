#include<iostream>
#include<cstdio>
using namespace std;
int i,j,s;
int b[6];
int main(){
    s=1;
    for(int i=1;i<=5;++i)b[i]=i;
    j=1;
    while(j>0){
        j=5;
        while(j>0&&b[j]==10+j-5)j--;
        if(j>0){
            s++;b[j]++;
            for(int i=j+1;i<=5;++i)b[i]=b[j]+i-j;
        }
    }
    printf("S=%d",s);
}