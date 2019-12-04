#ifndef _QUEUE_H
#define _QUEUE_H
#include<assert.h>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T,typename Comparator>
class PrioQueue
{
private:
    vector<T> heap;
    int heapSize;
public:

    PrioQueue(/* args */):heapSize(0)
{
}

~PrioQueue()
{
}
void enQueue(T e){
    heapSize++;
    heap.push_back(e);
    push_heap(heap.begin(),heap.end(),Comparator());
}
T deQueue(){
    assert(heapSize>=1);
    pop_heap(heap.begin(),heap.end(),Comparator());
    heapSize--;
    T top=heap[heapSize];
    heap.erase(heap.end()-1);
    return top;
}
bool empty(){
    return heapSize<1;
}
void fix(){
    make_heap(heap.begin(),heap.end(),Comparator());
}
};


#endif /* _QUEUE_H */