#ifndef _PARTITION_H
#define _PARTITION_H
#include "swap.h"
long partition(void *a,int size,int p,int r,int (*comp)(void *,void *)){
    int i,j;
    void *x=(void*)malloc(size);
    memcpy(x,a+r*size,size);
    i=p-1;
    for(j=p;j<r;j++)
        if(comp(a+j*size,x)<=0){
            i++;
            swap(a+i*size,a+j*size,size);
        }
    free(x);
    swap(a+(i+1)*size,a+r*size,size);
    return i+1;
}

int randomNumber(int p, int q){
    return p+(int)((double)(q-p)*rand()/(RAND_MAX));   
}

long randmizedPartition(void *a,int size,long p,long r,int (*comp)(void *,void *)){
    int i=randomNumber(p,r);
    swap(a+r*size,a+i*size,size);
    return partition(a,size,p,r,comp);
}
#endif /* _PARTITION_H */