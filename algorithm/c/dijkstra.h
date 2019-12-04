#ifndef _DIJKSTRA_H
#define _DIJKSTRA_H
#include<float.h>
#include"DataStructure/queue.h"
#include"DataStructure/pair.h"
#include"Utility/compare.h"
#define dblinfy DBL_MAX
pair dijkstra(double *w,int n,int s){
    int *pi=(int*)malloc(n*sizeof(int)),
        *poped=(int*)malloc(n*sizeof(int)),i,u,v;
    double *d=(double*)malloc(n*sizeof(double));
    for(i=0;i<n;i++){
        pi[i]=-1;
        poped[i]=0;
        d[i]=dblinfy;
    }
    d[s]=0.0;
    priorityQueue Q=heapAlloc(sizeof(double*),n);
    for(i=0;i<n;i++){
        double **pointer=(double**)malloc(sizeof(double*));
        *pointer=&d[i];
        enQueue(&Q,sizeof(double*),pointer,dblLess);
    }
    while(!empty(Q)){
        u=(*(double**)deQueue(&Q,sizeof(double*),dblLess))-d;
        poped[u]=1;
        for(v=0;v<n;v++){
            if(!poped[v])
                if(w[u*n+v]>0.0)
                    if(d[v]>d[u]+w[u*n+v]){
                        d[v]=d[u]+w[u*n+v];
                        pi[v]=u;
                    }
        }
        fix(&Q,sizeof(double*),dblLess);
    }
    pqueueClear(&Q);
    return make_pair(d,pi);
}
void printPath(int *pi,int s,int i){
    if(i==s){
        printf("%d ",i+1);
        return;
    }
    if(pi[i]==-1)
        printf("no path from %d to %d\n",s+1,i+1);
    else{
        printPath(pi,s,pi[i]);
        printf("%d ",i+1);
    }
}
#endif /* _DIJKSTRA_H */