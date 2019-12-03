#include <stdlib.h>
#include <string.h>
#ifndef _LIST_H
#define _LIST_H
struct Node{/*节点类型结构体*/
    void* data;
    struct Node* pre;
    struct Node* next;

};
typedef struct Node Node;
Node* builtList(void *array, int n, int size){/*用数组a创建双向链表*/
    int i;
    Node *p,*t,*l=(Node*)malloc(sizeof(Node));
    l->data = (void*)malloc(size);
    memcpy(l->data,array,size); /*设置链表头节点*/
    l->pre=l->next = NULL;
    t=l; /*t指向链表尾节点*/
    for(i=1;i<n;i++){/*依次设置链表中的各节点并链接到表尾*/
        p=(Node *)malloc(sizeof(Node)); /*分配空间*/
        p->data=(void*)malloc(size);
        memcpy(p->data,array+i*size,size); /*设置节点中的数据*/
        t->next = p; /*链接到链表尾部*/
        p->pre = t; /*链接前序节点*/
        p->next = NULL; /*尾节点next域置空*/
        t=p; /*修改尾节点指针*/
    }
    return l;
}
void bilistClear(Node *bl){
    if(bl->data!=NULL){/*清理数据域*/
        free((char*)bl->data);
        bl->data=NULL;
    }
    if(bl->pre!=NULL)/*调整本节点前的链表尾*/
        bl->pre->next=NULL;
    bl->pre=NULL; /*将本节点及以后部分从链表分离*/
    if(bl->next==NULL) /*无后继*/
        return;
    bilistClear(bl->next); /*递归清理下一个节点*/
    free(bl->next);
    bl->next=NULL;
}
#endif /*_LIST_H*/