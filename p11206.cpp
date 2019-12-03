#include<iostream>
#include<cstdio>
using namespace std;
int i, n, jr,jw,jb;
char ch[21],ch1;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;++i)cin>>ch[i];
    jr=1;
    jw=n;
    jb=n;
    while(jr<=jw){
        if(ch[jw]=='R'){
            ch1=ch[jr];
            ch[jr]=ch[jw];
            ch[jw]=ch1;
            jr=jr+1;
        }else if(ch[jw]=='W')jw=jw-1;
        else{
            ch1=ch[jw];
            ch[jw]=ch[jb];
            ch[jb]=ch1;
            jw=jw-1;
            jb=jb-1;
        }
    }
    for(i=1;i<=n;++i)printf("%c",ch[i]);
    printf("\n");
    return 0;
}