#include"huffman.h"
int main(int argc, char const *argv[])
{
    int f[]={45,13,12,16,9,5},i;
    char d[]={'a','b','c','d','e','f'};
    BinaryTree *h=huffman(f,d,6);
    printCode(h," ");
    h->clearTree();

    return 0;
}
