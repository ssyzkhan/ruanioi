#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mergeSort.h"
#include"Utility/compare.h"
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    mergeSort(a,sizeof(int),0,9,intGreater);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    mergeSort(b,sizeof(char *),0,5,strLess);
    for(i=0;i<6;i++)
        printf("%s ",b[i]);
    printf("\n");

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    mergeSort(c,sizeof(double),0,9,doubleGreater);
    for(i=0;i<10;i++)
        printf("%6.1lf",c[i]);
    printf("\n");

    return 0;
}
