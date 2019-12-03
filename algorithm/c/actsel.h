#ifndef _ACTSEL_H
#define _ACTSEL_H
#include<stdlib.h>
int *x;
void recurciveActivitySelector(int *s,int *f,int i,int j){
    int m=i+1;
    while(m<j&&s[m]<f[i])
        x[m++]=0;
    if(m<j){
        x[m]=1;
        recurciveActivitySelector(s,f,m,j);
    }
}
#endif /* _ACTSEL_H */