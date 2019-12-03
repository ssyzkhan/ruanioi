#ifndef _GETTHEINVERSION_H
#define _GETTHEINVERSION_H
int getTheInversion(int *a, int n){
    int i,j,key,count;
    for(j=1;j<n;j++){
        key = a[j];
        i=j-1;
        while(i>=0&&a[i]>key){
            a[i+1]=a[i];
            i--;
            count++;
        }
        a[i+1]=key;
    }
    return count;
}
#endif