#ifndef _KIJKSTRA_H
#define  _KIJKSTRA_H
#include"compare.h"
#include"queue.h"
#include<limits>
#include<iostream>
using namespace std;
pair<double*,int*>dijkstra(double *w,int n,int s){
    int *pi=new int[n],i,u,v;
    bool *poped = new bool[n];
    double *d=new double[n];
    fill(d,d+n,numeric_limits<float>::infinity());
    fill(pi,pi+n,-1);
    fill(poped,poped+n,false);
    d[s]=0.0;
    PrioQueue<double*,Greater<double>> Q;
    for(i=0;i<n;i++)
        Q.enQueue(&d[i]);
    while(!Q.empty()){
        u=Q.deQueue()-d;
        poped[u]=true;
        for(v=0;v<n;v++){
            if(!poped[v])
                if(w[u*n+v]>0)
                    if(d[v]>d[u]+w[u*n+v]){
                        d[v]=d[u]+w[u*n+v];
                        pi[v]=u;
                    }
        }
        Q.fix();
    }
    return make_pair(d,pi);
}
void printPath(int *pi,int s,int i){
    if(i==s){
        cout<<i+1<<" ";
        return;
    }
    if(pi[i]==-1)
        cout<<"no path from "<<(s+1)<<" to "<<(i+1)<<endl;
    else{
        printPath(pi,s,pi[i]);
        cout<<i+1<<" ";
    }
}
#endif /*  _KIJKSTRA_H */