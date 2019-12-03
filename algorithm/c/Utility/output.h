#ifndef _OUTPUT_H
#define _OUTPUT_H
#include<stdlib.h>
#include<stdio.h>
void intOutput(void *x){
    printf("%d ",*(int*)x);
}
void charOutput(void *x){
    printf("%c ",*(char*)x);
}
void doubleOutput(void *x){
    printf("%f ",*(double*)x);
}
void floatOutput(void *x){
    printf("%f ",*(float*)x);
}
#endif /* _OUTPUT_H */