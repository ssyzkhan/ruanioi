#ifndef _PARTITION_H
#define _PARTITION_H
#include<stdlib.h>
#include<iterator>
#include<algorithm>
using namespace std;
int randomNumber(int p,int q){
    return p+(int)((double)(q-p)*rand()/(RAND_MAX)); 
}
template<typename Iterator,typename Comparator>
Iterator randomizedPartition(Iterator p,Iterator r,Comparator comp){
    int n=distance(p,r),i;
    Iterator q=p,t=r;
    i=randomNumber(0,n-1);
    advance(q,i);
    iter_swap(q,--t);
    return stable_partition(p,r,bind2nd(comp,*t));
}

#endif /* _PARTITION_H */