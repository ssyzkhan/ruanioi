#include"huffman.h"
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int f[]={45,13,12,16,9,5};
    char d[]={'a','b','c','d','e','f'};
    BinaryTree *h=huffman(f,d,6);
    printCode(h," ");
    clearTree(h);
    h=NULL;
    return 0;
}
