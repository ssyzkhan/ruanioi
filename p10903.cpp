#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
const int n=7,m=6;
int g[n+5][m+5];
double d; bool p;
double disp(int x1,int y1,int x2, int y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
    int i,j,x0,y0,x1,y1,x2,y2;
    for(i=0;i<=n;i++)for(j=0;j<=m;j++)g[i][j]=0;
    cin>>x1>>y1>>x2>>y2;
    g[x1][y1]=g[x2][y2]=1;p=true;
    while(p){
        p=false;d=disp(x1,y1,x2,y2);x0=x1;y0=y1;
        for(i=4;i<=n;i++)for(j=0;j<=m;j++)
        if(d>disp(i,j,x2,y2)&&g[i][j]==0){
            d=disp(i,j,x2,y2);x0=i;y0=j;
        }
        if(x0!=x1||y0!=y1){
            x1=x0;y1=y0;p=true;g[x1][y1]=1;
        }
        d=disp(x1,y1,x2,y2);x0=x2;y0=y2;
        for(i=0;i<=3;i++)for(j=0;j<=m;j++)
            if(d<disp(x1,y1,i,j)&&g[i][j]==0){
                d=disp(x1,y1,i,j);x0=i;y0=j;
            }
        if(x0!=x2||y0!=y2){
            x2=x0;y2=y0;p=true;g[x2][y2]=1;
        }
    }
    cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
    return 0;
}