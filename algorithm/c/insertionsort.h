#include <string.h>
#include <stdlib.h>
#include"DataStructure/list.h"
#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H
void lsitInsertionSort(Node *List, int size, int(*comp)(void *,void *)){
    Node *p,*q,*t;
    void* key = (void*)malloc(size);
    for(p=List->next;p!=NULL;p=p->next){/*p相当于指向a[j]*/
        memcpy(key,p->data,size); /*key分配的值a[j]*/
        q=q->pre; /*q相当于指向a[i]*/
        t=q;
        while((q!=NULL)&&(comp(q->data,key)>0)){
            memcpy((q->next)->data,q->data,size); /*a[j]分配值a[j-1]*/
            t=q;
            q=q->pre;
        }
        memcpy(t->data,key,size); /*a[i+1]分配值key*/
    }
}
void insertionSort(void *a, int n, int size, int (*comp)(void *,void *)){
    int i,j;
    void *key = (void *)malloc(size);
    for(j=1;j<n;j++){
        memcpy(key,a+j*size,size); /*key的值为a[j]*/
        i=j-1;
        while((i>=0)&&(comp(a+i*size,key)>0)){/*a[i]>key */
            memcpy(a+(i+1)*size,a+i*size,size); /*a[i+1]的值为a[i]*/
            i--; /*i往前移*/
        }
        memcpy(a+(i+1)*size,key,size); /*a[i+1]值为key*/
    }
}
void insertionSort(int *a, int n){
    int i,j,key; /*key的类型与数组a的元素类型相同 */
    for(j=1;j<n;j++){
        key = a[j];  /*key = a[j] */
        i=j-1;   /* i 的值为 j-1 */
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i--; /* i 的值往前移动 */
        }
        a[i+1]=key; /* a[i+1] 放key的值 */
    }
}
#endif /* _INSERTIONSORT_H */