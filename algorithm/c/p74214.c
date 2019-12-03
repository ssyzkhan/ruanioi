#include<stdio.h>
#include<stdlib.h>
#include"Utility/compare.h"
#include"quickSort.h"
#include<time.h>
int main(int argc, char const *argv[])
{
    srand((int)time(0));
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    quickSort(a,sizeof(int),0,9,intGreater);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    char *b[]={"ChongQing","ShangHai","AoMen","TianJing","BeiJing","XiangGang"};
    quickSort(b,sizeof(char *),0,5,strLess);
    for(i=0;i<6;i++)
        printf("%s ",b[i]);
    printf("\n");

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    quickSort(c,sizeof(double),0,9,doubleLess);
    for(i=0;i<10;i++)
        printf("%0.1lf ",c[i]);
    return 0;
}
