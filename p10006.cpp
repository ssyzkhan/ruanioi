#include<cstdio>
using namespace std;
int n,k,i,a[41];
void find(int x){
    int s,i1,j1;
    bool p;
    i1=0;
    p=1;
    while(p){
        i1=i1+1;
        s=0;
        for(j1=1;j1<=n;j1++)
            if(a[j1]>a[i1])s=s+1;
            if(s==x-1){
                printf("%d\n",a[i1]);
                p=0;
            }
    }
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    find(k);
    find(n-k);
    return 0;
}