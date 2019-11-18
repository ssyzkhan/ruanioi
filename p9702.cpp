#include<iostream>
using namespace std;
int a[21];
int main(){
    int x,y,yl,jk,jl,g,e;
    x=3465;y=264;jk=20;
    for(jl=1;jl<=20;++jl)a[jl]=0;
    while(y!=0){
        yl=y%10;
        y=y/10;
        while(yl!=0){
            g=x;
            for(e=jk;e>=1;--e){
                g=g+a[e];
                a[e]=g%10;
                g=g/10;
            }
            yl=yl-1;
        }
        jk=jk-1;
    }
    jl=1;
    while(a[jl]==0)jl=jl+1;
    for(jk=jl;jk<=20;++jk)cout<<" "<<a[jk];
}