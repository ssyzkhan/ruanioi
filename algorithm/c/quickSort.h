#ifndef _QUIKSORT_H
#define _QUIKSORT_H
#include "Utility/partition.h"
void quickSort(void* a,int size,long p,long r,int(*comp)(void *,void *)){
    if(p<r){
        long q = randmizedPartition(a,size,p,r,comp);
        quickSort(a,size,p,q,comp);
        quickSort(a,size,p+1,r,comp);
    }
}
#endif /* _QUIKSORT_H */