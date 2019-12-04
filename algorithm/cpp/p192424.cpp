#include"prim.h"
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double a[81]={0,4,0,0,0,0,0,8,0,
                 4,0,8,0,0,0,0,11,0,
                 0,8,0,7,0,4,0,0,2,
                 0,0,7,0,9,14,0,0,0,
                 0,0,0,9,0,10,0,0,0,
                 0,0,4,14,10,0,2,0,0,
                 0,0,0,0,0,2,0,1,6,
                 8,11,0,0,0,0,1,0,7,
                 0,0,2,0,0,0,6,7,0};
    double weight=0.0,*key;
    int i,*pi,n=9;
    pair<double*,int*>r;
    r=mstPrime(a,n,0);
    key=r.first;pi=r.second;
    for(i=0;i<n;i++){
        weight+=key[i];
        if(pi[i]>=0)
            cout<<"<"<<pi[i]<<", "<<i<<"> ";
    }
    cout<<endl<<"weight: "<<weight<<endl;
    delete []key;
    delete []pi;
    return 0;
}
