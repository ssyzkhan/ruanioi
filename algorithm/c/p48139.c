#include<stdlib.h>
#include<stdio.h>
#include"Utility/compare.h"
#include"Utility/partition.h"
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i,j;
    j=partition(a,sizeof(int),0,9,intGreater);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n%d\n",j);

    char *b[]={"ChongQing", "AoMen", "TianJin", "BeiJing", "XiangGang", "ShangHai"};
    j=partition(b,sizeof(char *),0,5,strLess);
    for(i=0;i<6;i++)
        printf("%s ",b[i]);
    printf("\n%d\n",j);

    double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
    j=partition(c,sizeof(double),0,9,doubleGreater);
    for(i=0;i<10;i++)
        printf("%8.2f",c[i]);
    printf("\n%d\n",j);

    return 0;
}
