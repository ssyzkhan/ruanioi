#include"dijkstra.h"
int main(int argc, char const *argv[])
{
    pair r;
    double a[]={0,10,0,5,0,
                0,0,1,2,0,
                0,0,0,0,4,
                0,3,9,0,2,
                7,0,6,0,0},
                *d;
    int *pi,i,n=5;
    r=dijkstra(a,5,0);
    d=(double*)r.first;
    pi=(int*)r.second;
    for(i=0;i<n;i++){
        if(i!=0){
            printPath(pi,0,i);
            printf("\n%f\n",d[i]);
        }
    }
    free(d);
    free(pi);
    return 0;
}
