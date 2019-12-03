#include<stdio.h>
int number, ndata, data[100],sum;
void solve(int s, int sign, int n){
    int i;
    for(i=s;i<ndata;i++){
        sum+=sign*(number/n/data[i]);
        solve(i+1,-sign,n*data[i]);
    }
}
int main(){
    int i;
    scanf("%d%d",&number,&ndata);
    sum=0;
    for(i=0;i<ndata;i++)scanf("%d",&(data[i]));
    solve(0,1,1);
    printf("%d\n",sum);
    return 0;
}