#include<stdio.h>
#include"prim.h"

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
    pair r;
    double *key,weight=0.0;
    int *pi,i,n=9;
    r=mstPrim(a,n,0);
    key=(double*)r.first;
    pi=(int*)r.second;
    for(i=0;i<n;i++){
        weight+=key[i];
        if(pi[i]>=0)
            printf("<%d,%d>",pi[i],i);
    }
    printf("\nweight: %1.1f\n",weight);
    free(key);
    free(pi);
    return 0;
}
