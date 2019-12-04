#ifndef _PRIM_H
#define _PRIM_H
#include"queue.h"
#include"compare.h"
#include<limits>
#include<algorithm>
#include<iostream>
using namespace std;
pair<double*,int*>mstPrime(double *w,int n,int r){
    int i;
    double *key=new double[n];
    int *pi=new int[n];
    bool *poped=new bool[n];
    fill(key,key+n,numeric_limits<float>::infinity());
    fill(pi,pi+n,-1);
    fill(poped,poped+n,false);
    key[r]=0.0;
    PrioQueue<double*,Greater<double>> Q;
    for(i=0;i<n;i++)
        Q.enQueue(&key[i]);
    while(!Q.empty()){
        int u=Q.deQueue()-key;
        poped[u]=true;
        for(int v=0;v<n;v++){
            if(!poped[v])
                if(w[u*n+v]!=0.0)
                    if(w[u*n+v]<key[v]){
                        pi[v]=u;
                        key[v]=w[u*n+v];
                    }
        }
        Q.fix();
    }
    return make_pair(key,pi);

}

#endif /* _PRIM_H */