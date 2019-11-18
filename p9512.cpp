#include<iostream>
#define N 7
using namespace std;
int fun(char s[],char a,int n){
    int j;
    j=n;
    while(a<s[j]&&j>0)j--;
    return j;
}
int main(){
    char s[N+1];
    int k;
    for(k=1;k<=N;k++)
        s[k]='A'+2*k+1;
    cout<<fun(s,'M',N)<<endl;
}