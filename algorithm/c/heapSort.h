#ifndef _HEAPSORT_H
#define _HEAPSORT_H
#include "DataStructure/heap.h"
void heapSort(void* a,int size,int n,int(*comp)(void *,void *)){
    int i,heapSize=n;
    buildHeap(a,size,n,comp);
    for(i=heapSize-1;i>0;i--){
        swap(a+i*size,a,size);
        heapSize--;
        heapify(a,size,0,heapSize,comp);
    }
}


#endif /* _HEAPSORT_H */