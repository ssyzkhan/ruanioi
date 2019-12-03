#ifndef _ACTSEL_H
#define _ACTSEL_H
int* recurciveActivitySelector(int *s,int *f,int i,int j){
    static int *x=new int[j];
    int m=i+1;
    while(m<j&&s[m]<f[i])
        x[m++]=0;
    if(m<j){
        x[m]=1;
        recurciveActivitySelector(s,f,m,j);
    }
    return x;
}
#endif /* _ACTSEL_H */