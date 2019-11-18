#include<cstdio>
using namespace std;
inline int fun(int x){
    if(x==0||x==1)return 3;
    else return x-fun(x-2);
}
int main(){
    printf("%d",fun(9));
    putchar('\n');
    return 0;
}