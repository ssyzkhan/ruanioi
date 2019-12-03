#ifndef _HANOI_H
#define _HANOI_H
#include<stdio.h>
int pickTopDisk(char *current,char x){
    int i=0;
    while(current[i]!=x)
        i++;
    return i;
}
void hanoi(char *current,int n,char A,char B,char C){
    static int count=0;
    int i=0;
    if(n==1){
        i=pickTopDisk(current,A);
        current[i]=C;
        count++;
        printf("move %d disk %d: %c -> %c\n",count,i+1,A,C);
        return;
    }
    hanoi(current,n-1,A,C,B);
    current[n-1]=C;
    count++;
    printf("move %d disk %d: %c -> %c\n",count,n,A,C);
    hanoi(current,n-1,B,A,C);
}
#endif /* _HANOI_H */