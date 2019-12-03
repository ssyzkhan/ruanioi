#include<limits.h>
#include<stdlib.h>
#include<stdio.h>
#include"actsel.h"
int main(int argc, char const *argv[])
{
    x=(int*)malloc(12*sizeof(int));
    int s[]={0,1,3,0,5,3,5,6,8,8,2,12,INT_MAX},
        f[]={0,4,5,6,7,8,9,10,11,12,13,14,INT_MAX},i;
    recurciveActivitySelector(s,f,0,12);
    for(i=1;i<12;i++)
        printf("%d ",x[i]);
    printf("\n");
    free(x);    
    return 0;
}
