#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    if(!n&&!m)return 0;
    if(!m||m+m>n+1){puts("-1");return 0;}
    for(int i=2;i<=m+m-1;i++)printf("%d\n",i/2);
    for(int i=m+m;i<=n;i++)printf("%d\n",i-1);
    return 0;
}
