#include<stdlib.h>
#include"lcs.h"
#include"Utility/compare.h"
#include"Utility/output.h"
int main(int argc, char const *argv[])
{
    char *x="ACCGGTCGAGTGCGCGGAAGCCGGCCGAA",
    *y="GTCGTTCGGAATGCCGTTGCTCTGTAAA";
    int *c,a[]={389,207,155,300,299,170,158,65},
    b[]={389,300,299,207,170,158,155,65};
    c=lcsLength(x,y,sizeof(char),29,28,charLess);
    printLcs(c,28,x,y,sizeof(char),29,28,charLess,charOutput);
    printf("\n");

    c=lcsLength(a,b,sizeof(int),8,8,intLess);
    printLcs(c,8,a,b,sizeof(int),8,8,intLess,intOutput);
    printf("\n");
    free(c);
    return 0;
}
