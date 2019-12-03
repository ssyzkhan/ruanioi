#include<stdio.h>
#include"matrixchain.h"
int main(int argc, char const *argv[])
{
    int p[]={30,35,15,5,10,20,25};
    int *s,*m;
    pair r=matrixChainOrder(p,6);
    m=(int*)r.first;
    s=(int*)r.second;
    printOptimalParents(s,1,6,6);
    printf("\n%d\n",m[13]);
    free(s);
    free(m);
    return 0;
}
