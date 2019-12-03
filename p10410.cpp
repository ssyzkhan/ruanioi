#include<stdio.h>
int main(){
    int u[4],a,b,c,x,y,z;
    scanf("%d%d%d%d",&(u[0]),&(u[1]),&(u[2]),&(u[3]));
    a=u[0]+u[1]+u[2]+u[3]-5;
    b=u[0]*(u[1]-u[2]/u[3]-5);
    c=u[0]*u[1]/u[2]*u[3];
    x=(a+b+2)*3-u[(c+3)%4];
    int b1 = b%3;
    /*
    y=(c*100-13)/a/(u[b%3]*5);
    if((x+y)%2==0)z=(a+b+c+x+y)/2;
    z=(a+b+c-x-y)*2;
    printf("%d\n",x+y-z);*/
    printf("%d",b1);
    return 0;

}