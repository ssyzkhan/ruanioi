#include"dijkstra.h"
#include<iostream>
int main(int argc, char const *argv[])
{
    pair<double*,int*>r;
    double a[]={0,10,0,5,0,
                0,0,1,2,0,
                0,0,0,0,4,
                0,3,9,0,2,
                7,0,6,0,0},
                *d;
    int *pi,i,s=0,n=5;
    r=dijkstra(a,n,s);
    d=r.first;
    pi=r.second;
    for(i=0;i<n;i++){
        if(i!=s){
            printPath(pi,s,i);
            cout<<endl<<d[i]<<endl;
        }
    }
    delete []d;
    delete []pi;
    return 0;
}
