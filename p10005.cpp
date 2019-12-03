#include<cstdio>
using namespace std;
int f,a[9];
int main(){
    for(int i=1;i<=8;i++){
        f=i%2;
        if(f==0)a[i]=0;
        else a[i]=1;
        for(int j=1;j<=i;j++)
            if(f==0)a[i]=a[i]+j;
            else a[i]=a[i]*j;
    }
    for(int i=1;i<=8;i++)
        printf("%5d",a[i]);
    return 0;
}