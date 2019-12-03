#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include"partition.h"
template<typename Iterator,typename Comparator>
void quickSort(Iterator p,Iterator r,Comparator comp){
    long n=distance(p,r);
    if(n>1){
        Iterator q=randomizedPartition(p,r,comp);
        quickSort(p,q,comp);
        quickSort(q,r,comp);
    }
}
#endif /* _QUICKSORT_H */