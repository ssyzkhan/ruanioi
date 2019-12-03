#include<stdlib.h>
#include<stdio.h>
#include"knapsack.h"
int main(int argc, char const *argv[])
{
    int w[]={2,3,4,5},v[]={3,4,5,7};
    int *m,*x,i,j;
    m=knapsack(w,v,4,9);
    x=buildSolution(m,4,w,9);
    for(i=0;i<4;i++)
        printf("%d ",x[i]);
    printf("\n");

    for(int row=0;row<5;row++){
        for(int col=0;col<10;col++)
            printf("%d      ",m[row*10+col]);
       
        printf("\n"); 
    }

    free(m);free(x);
    return 0;
}
