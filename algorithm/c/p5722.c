#include<stdlib.h>
#include"hanoi.h"
int main(int argc, char const *argv[])
{
    char current[]={'A','A','A','A'};
    char A='A',B='B',C='C';
    hanoi(current,4,A,B,C);
    return 0;
}
