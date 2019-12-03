#ifndef _MERGE_H
#define _MERGE_H
void merge(void *a, int size, int p, int q, int r, int(*comp)(void *,void *)){
    int i,j,k,n1=q-p+1,n2=r-q;
    void *L = (void *)malloc(n1*size);
    void *R = (void *)malloc(n2*size);
    memcpy(L,a+p*size,n1*size);
    memcpy(R,a+(q+1)*size,n2*size);
    i=j=0;
    k=p;
    while(i<n1&&j<n2)
        if(comp(L+i*size,R+j*size)<0) //L[i]<R[j]
            memcpy(a+(k++)*size,L+(i++)*size,size); //a[k]<-L[i]
        else
            memcpy(a+(k++)*size,R+(j++)*size,size); //a[k]<-R[i]
    if(i<n1)
        memcpy(a+k*size,L+i*size,(n1-i)*size); //将L[i...n1]复制到a[k...r]
    if(j<n2)
        memcpy(a+k*size,R+j*size,(n2-j)*size); //将R[j...n2]复制到a[k...r]
    free(L);L=NULL;
    free(R);R=NULL;
        
}

#endif /* _MERGE_H */