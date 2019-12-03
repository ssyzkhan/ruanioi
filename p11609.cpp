#include<stdio.h>
const int u[3]={1,-3,2};
const int v[2]={-2,3};
int g(int n){
    int i,sum=0;
    for(i=1;i<=n;i++)sum+=u[i%3]*i;
    return sum;
}
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)sum+=v[i%2]*g(i);
    printf("%d\n",sum);
    return 0;
}