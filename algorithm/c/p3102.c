#include<stdio.h>
#include"getTheInversion.h"

int main(int argc, char const *argv[])
{
    int A[] = {5,1,9,4,6,2,0,3,8,7};
    int totalVersion = getTheInversion(A,10);
    printf("%d",totalVersion);
    return 0;
}
