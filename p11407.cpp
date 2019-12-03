#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[6],sum,n,mx,i,j,k;
bool cover[22001];
int main(){
    cin>>a[5]>>a[4]>>a[3]>>a[2]>>a[1]>>a[0];
    if(a[5]==0&&a[3]==0&&a[1]==0){
        a[5]=a[4];
        a[4]=a[2];
        a[3]=a[0];
        a[2]=0;
        a[0]=0;
    }
    for(i=0;i<=5;i++)
        if(a[i]>10)a[i]=10+(a[i]%2);
    sum=0;
    for(i=0;i<=5;i++)sum=sum+a[i]*(6-i);
    if(sum%2!=0){
        puts("Can't be divided.");
        return 0;
    }
    sum=sum/2;
    mx=0;
    cover[0]=true;
    for(i=1;i<=sum*2;i++)cover[i]=false;
    for(i=0;i<=5;i++){
        j=0;
        while(j<a[i]){
            for(k=mx;k>=0;k--){
                if(cover[k])cover[k+6-i]=true;
            }
            mx=mx+6-i;
            j=j+1;
        }
    }
    if(cover[sum])puts("Can be divided.");
    else puts("can't be divided.");
    return 0;
}