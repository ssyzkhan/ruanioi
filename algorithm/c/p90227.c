#include<stdio.h>
#include<stdlib.h>
#include"Utility/compare.h"
#include"heapSort.h"
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    heapSort(a,sizeof(int),10,intGreater);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
   
    char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    heapSort(b,sizeof(char *),6,strLess);
    for(i=0;i<6;i++)
        printf("%s ",b[i]);
    printf("\n");

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    heapSort(c,sizeof(double),10,doubleGreater);
    for(i=0;i<10;i++)
        printf("%.1lf ",c[i]);
    printf("\n");
     return 0;
}
