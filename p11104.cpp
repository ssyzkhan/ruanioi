#include<cstdio>
using namespace std;
int x,y1,y2,y3;
int main(){
    scanf("%d",&x);y1=0;y2=1;y3=1;
    while(y2<=x){
        y1=y1+1;y3=y3+2;y2=y2+y3;
    }
    printf("%d",y1);
}