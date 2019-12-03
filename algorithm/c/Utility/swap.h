#ifndef _SWAP_H
#define _SWAP_H
#include<stdlib.h>
void swap(void *x,void *y,int size){
    void* temp=(void*)malloc(size);
    memcpy(temp,x,size);
    memcpy(x,y,size);
    memcpy(y,temp,size);
    free(temp);
}
#endif /* _SWAP_H */