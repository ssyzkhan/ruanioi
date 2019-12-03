#include<stdio.h>
#include<stdlib.h>
#include "insertionsort.h"
#include "Utility/compare.h"
int main(int argc, char const *argv[])
{
    int A[]={5,1,9,4,6,2,0,3,8,7},i;
    //double C[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    //char *B[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    struct Node *a,*t;
    a=builtList(A,10,sizeof(int)); /*用A创建双向链表a*/
    lsitInsertionSort(a,sizeof(int),intGreater); /*对a做插入排序*/
    while(t!=NULL){/*输出排好序的链表数据*/
        printf("%d ",*(int*)(t->data));
        t=t->next;
    }
    return (EXIT_SUCCESS);
}
