#ifndef _FLOYD_H
#define _FLOYD_H
#include<string.h>
#include<float.h>
#include<stdlib.h>
#include<stdio.h>
#include"DataStructure/pair.h"
pair floydWarshall(double* w,int n){
    double *d=(double*)malloc(n*n*sizeof(double));
    int i,j,k,*pi=(int*)malloc(n*n*sizeof(int));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(j==i||w[i*n+j]>=DBL_MAX)
                pi[i*n+j]=-1;
            else
                pi[i*n+j]=i;
    memcpy(d,w,n*n*sizeof(double));
    for(k=1;k<=n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(d[i*n+j]>d[i*n+k-1]+d[(k-1)*n+j]){
                    d[i*n+j]=d[i*n+k-1]+d[(k-1)*n+j];
                    pi[i*n+j]=pi[(k-1)*n+j];
                }
    return make_pair(d,pi);       
}
void printAllPairsShotestPath(int *pi,int n,int i,int j){
    if(i==j){
        printf("%d ",i+1);
        return;
    }
    if(pi[i*n+j]==-1)
        printf("no path from %d to %d exists.\n",i+1,j+1);
    else
    {
        printAllPairsShotestPath(pi,n,i,pi[i*n+j]);
        printf("%d ",j+1);
    }
    
}
#endif /* _FLOYD_H */