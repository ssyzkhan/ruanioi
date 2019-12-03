#include<stdlib.h>
#include<stdio.h>
#include"Utility/compare.h"
#include"Utility/merge.h"
int main(int argc, char const *argv[])
{
    int a[]={1,2,5,8,9,0,3,4,6,7},i;
    merge(a,sizeof(int),0,4,9,intGreater);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    char *b[]={"AoMen", "BeiJing", "ShangHai", "ChongQing", "TianJin", "XiangGang"};
    merge(b,sizeof(char *),0,2,5,strGreater);
    for(i=0;i<6;i++)
        printf("%s ",b[i]);
    printf("\n");

    double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
    merge(c,sizeof(double),0,4,9,doubleGreater);
    for(i=0;i<10;i++)
        printf("%8.2f",c[i]);
    printf("\n");

    return 0;
}
