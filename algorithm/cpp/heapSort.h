#ifndef _HEAPSORT_H
#define _HEAPSORT_H
#include<algorithm>
template<typename Iterator,typename Comparator>
void heapSort(Iterator p,Iterator r,Comparator comp){
    Iterator q;
    make_heap(p,r,comp);
    for(q=r;q!=p;q--)
        pop_heap(p,q,comp); 
}

#endif /* _HEAPSORT_H */