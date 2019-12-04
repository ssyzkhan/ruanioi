#ifndef _QUEUE_H
#define _QUEUE_H
#include<assert.h>
#include<stdlib.h>
#include"heap.h"
struct queue{
    int length;
    int heapSize;
    void *heap;
};
typedef struct queue priorityQueue;
priorityQueue heapAlloc(int size,int n){
    priorityQueue q;
    q.length=n; //设置堆的最大长度
    q.heapSize=0; //目前队空
    q.heap=(void*)malloc(n*size); //分配堆空间
    return q;
}
void enQueue(priorityQueue *q,int size,void *e,int(*compare)(void *,void *)){
    if(q->heapSize==q->length)  //队列满
        return;
    int i=q->heapSize++; //i为扩大后的堆的最后元素下标
    memcpy(q->heap+i*size,e,size);  //heap[i]分配值e
    while(i>0&&compare(q->heap+parent(i)*size,q->heap+i*size)<0){
        swap(q->heap+i*size,q->heap+parent(i)*size,size);
        i=parent(i);
    }
}

void * deQueue(priorityQueue *q,int size,int (*compare)(void *,void *)){
    assert(q->heapSize>=1);
    void *top=(void*)malloc(size);
    memcpy(top,q->heap,size);
    q->heapSize--;
    memcpy(q->heap,q->heap+(q->heapSize)*size,size);  //注意数组从0开头
    heapify(q->heap,size,0,q->heapSize,compare);
    return top;
}
int empty(priorityQueue q){
    return q.heapSize<1;
}
void pqueueClear(priorityQueue *q){
    free(q->heap);
    q->heap=NULL;
    q->heapSize=q->length=0;
}
void fix(priorityQueue *q,int size,int(*compare)(void *,void *)){
    int i;
    for(i=q->heapSize/2;i>=0;i--)
        heapify(q->heap,size,i,q->heapSize,compare);
}
#endif /* _QUEUE_H */