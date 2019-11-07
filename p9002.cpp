#include<cstdio>
using namespace std;
const int n=10;
int s;
int co(int il){
    int jl,sl;
    sl = n;
    for(int jl = n-1;jl>=n-il+1;--jl)
        sl = (sl*jl)/(n-jl+1);
    return sl;

}
int main(){
    s=n+1;
    for(int i=2;i<=n;++i)s=s+co(i);
    printf("S=%d\n",s);
}