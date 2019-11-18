#include<stdio.h>
int main(){
    int i,j;
    char str1[]="pig-is-stupid";
    char str2[]="clever";
    str1[0]='d';str1[1]='o';
    for(i=7,j=0;j<6;i++,j++)
        str1[i]=str2[j];
    printf("%s\n",str1);
    return 0;
}