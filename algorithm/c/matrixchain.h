#ifndef _MATRIXCHAIN_H
#define  _MATRIXCHAIN_H
#include<limits.h>
#include<stdlib.h>
#include"DataStructure/pair.h"
pair matrixChainOrder(int *p,int n){
    int i,l,j,k,q;
    int *m=(int*)malloc((n+1)*(n+1)*sizeof(int));
    int *s=(int*)malloc((n+1)*(n+1)*sizeof(int));
    for(i=0;i<=n;i++)
        m[i*(n+1)+i]=0;  //m[i,i]<-0
    for(l=2;l<=n;l++)
        for(i=1;i<=n-l+1;i++){
            j=i+l-1;
            m[i*(n+1)+j]=INT_MAX; //m[i,j]<-N
            for(k=i;k<=j-1;k++){
                q=m[i*(n+1)+k]+m[(k+1)*(n+1)+j]+p[i-1]*p[k]*p[j];
                if(q<m[i*(n+1)+j]){
                    m[i*(n+1)+j]=q;
                    s[i*(n+1)+j]=k;
            }
            }
        }
    return make_pair(m,s);
}
void printOptimalParents(int *s,int i,int j,int n){
    if(i==j)
        printf("A%d",i);
    else{
        printf("(");
        printOptimalParents(s,i,s[i*(n+1)+j],n);
        printOptimalParents(s,s[i*(n+1)+j]+1,j,n);
        printf(")");
    }
}
#endif /*  _MATRIXCHAIN_H */