#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
const int n=5;
int k;
int a[2*n+1][2*n+1];
int main(){
    k=1;
    for(int i=1;i<=2*n-1;++i)
        if(i<=n)
            if(i%2==1)
                for(int j=i;j>=1;--j){
                    a[i-j+1][j]=k;k++;
                }
            else for(int j=1;j<=i;++j){
                a[i-j+1][j]=k;k++;
            }
        else if(i%2==1)
            for(int j=n;j>=i-n+1;--j){
                a[i-j+1][j]=k;k++;
            }
        else for(int j=i-n+1;j<=n;++j){
            a[i=j+1][j]=k;k++;
        }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j) printf("%d ",a[i][j]);
        cout<<endl;
    }
    return 0;
}