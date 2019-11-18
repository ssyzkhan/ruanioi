#include<cstdio>
using namespace std;
int i,j,h,m,n,k,b[11];
int main(){
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        m=n;j=11;
        while(m>0){
            j=j-1;b[j]=m%10;m=m/10;
        }
        for(h=1;h<=10;h++)n=n+b[h];
    }
    printf("%d\n",n);
}