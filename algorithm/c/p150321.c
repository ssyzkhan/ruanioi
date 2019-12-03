#include<stdlib.h>
#include"floyd.h"
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double w[]={0,3,8,DBL_MAX,-4,DBL_MAX,0,DBL_MAX,1,7,
                DBL_MAX,4,0,DBL_MAX,DBL_MAX,
                2,DBL_MAX,-5,0,DBL_MAX,
                DBL_MAX,DBL_MAX,DBL_MAX,6,0},
                *d;
    int i,j,k,*pi,n=5;
    pair r;
    r=floydWarshall(w,n);
    d=(double*)r.first;
    pi=(int*)r.second;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%1.1f ",d[i*n+j]);
        printf("\n\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",pi[i*n+j]);
        printf("\n\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printAllPairsShotestPath(pi,n,i,j);
            printf(" : %1.1f\n",d[i*n+j]);
        }
    }
    free(d);free(pi);
    return 0;
}
