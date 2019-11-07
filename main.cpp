#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int s, maxx;
int a[11];
int main(){
    printf("Please enter numbers\n");
    for(int i=1;i<=10;++i)
    cin>>a[i];
    maxx=a[1];s=a[1];
    for(int i=2;i<=10;++i){
        if(s<0)s=0;
        s=s+a[i];
        if(s>maxx)maxx=s;
    }
    printf("%d",maxx);
    return 0;
}