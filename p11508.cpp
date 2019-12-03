#include<stdio.h>

using namespace std;
char c[3][200];
int s[10],m,n;
void numara(){
    int i,j,cod,nr;
    for(j=0;j<n;j++){
        nr=0;cod=1;
        for(i=0;i<m;i++){
            if(c[i][j]=='1'){
                if(!cod){cod=1;s[nr]++;nr=0;}
            }else{
                if(cod){nr=1;cod=0;}
                else nr++;
            }
        }
        if(!cod)s[nr]++;
    }
}
int main(){
    int i,j;
    scanf("%d%d\n",&m,&n);
    for(i=0;i<m;i++) gets(c[i]);
    numara();
    for(i=1;i<=m;i++)
        if(s[i]!=0)printf("%d%d",i,s[i]);
    return 0;
}