#include<stdio.h>
#include<math.h>
int a[50];
void work(int p,int r){
    if(p<r){
        int i=p-1,j,temp;
        for(j=p;j<r;j++){
            if(a[j]>=a[r]){
                i++;
                temp=a[i];a[i]=a[j];a[j]=temp;
            }
        }
        temp = a[i+1];a[i+1]=a[r];a[r]=temp;
        work(p,i);
        work(i+2,r);
    }
}
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&(a[i]));
    work(0,n-1);
    for(i=0;i<n-1;i++)sum+=abs(a[i+1]-a[i]);
    printf("%d\n",sum);
    return 0;
}