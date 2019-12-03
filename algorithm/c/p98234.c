#include<stdio.h>
#include<stdlib.h>
#include"Utility/compare.h"
#include"DataStructure/queue.h"
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    priorityQueue q=heapAlloc(sizeof(int),10);
    for(i=0;i<10;i++)
        enQueue(&q,sizeof(int),a+i,intLess);
    while(!empty(q))
        printf("%d ",*(int*)deQueue(&q,sizeof(int),intLess));
    printf("\n");
    pqueueClear(&q);

    char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    q=heapAlloc(sizeof(char*),6);
    for(i=0;i<6;i++)
        enQueue(&q,sizeof(char*),b+i,strGreater);
    while(!empty(q))
        printf("%s ",*(char**)deQueue(&q,sizeof(char*),strGreater));
    printf("\n");
    pqueueClear(&q);
    
    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    q=heapAlloc(sizeof(double),10);
    for(i=0;i<10;i++)
        enQueue(&q,sizeof(double),c+i,doubleGreater);
    while(!empty(q))
        printf("%1.1lf ",*(double*)deQueue(&q,sizeof(double),doubleGreater));
    printf("\n");
    pqueueClear(&q);
    return 0;
}
