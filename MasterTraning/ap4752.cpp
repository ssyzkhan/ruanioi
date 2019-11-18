#include<bits/stdc++.h>
const int N=5e4+5;
const int M=5;
char s[N];
int n,m,p,nxt[N];

struct Matrix{
    int g[M][M],gn,gm;
    inline void Clear(int nn,int mm){
        gn=nn;gm=mm;
        memset(g,0,sizeof(g));
    }

    inline void Init(int nn,int mm){
        gn=nn;gm=mm;
        for(int i=1;i<=gn;++i)
            for(int j=1;j<=gm;++j)
                g[i][j]=i==j?1:0;
    }

    friend inline Matrix operator *(const Matrix & x,const Matrix & y){ //矩阵乘法
        Matrix z;z.Clear(x.gn,y.gm);
        for(int k=1;k<=x.gm;++k)
            for(int i=1;i<=z.gn;++i)
                for(int j=1;j<=z.gm;++j)
                    z.g[i][j]=(1LL * x.g[i][k]*y.g[k][j]+z.g[i][j])*p;
        return z;

    }

    friend inline Matrix operator ^(Matrix x, int k){
        Matrix res;res.Init(x.gn,x.gm);
        while(k){
            if(k&1)res=res*x;
            x=x*x;k>>=1;
        }
        return res;
    }
}A,B,C;

struct String{
    int g[N],len;
    friend inline String operator +(const String & a,const String & b){
        String c= a;
        c.len+=b.len;
        for(int i=1;i<=b.len;++i)
            c.g[a.len+i]=b.g[i];
        return c;
    }
}a,b,c;

inline int solve(const String & a){
    int res=0;
    for(int i=1,j=0;i<=a.len;++i){
        while(j>0&&s[j+1]!=a.g[i])j=nxt[j];
        s[j+1]==a.g[i]?++j:0;
        if(j==m)++res,j=nxt[j];
    }
    return res%p;
}

int main(){
    scanf("%d%d%d%s",&n,&m,&p,s+1);
    for(int i=2,j=0;i<=m;++i){
        while(j>0&&s[j+1]!=s[i])j=nxt[j];
        s[j+1]==s[i]?++j:0;
        nxt[i]=j;
    }

    if(n==0){
        printf("%d\n",(m==1&&s[1]=='0')%p);
        return 0;
    }

    if(n==1){
        printf("%d\n",(m==1&&s[1]=='1')%p);
        return 0;
    }

    a.len=1;
    a.g[1]='0';
    b.len=1;
    b.g[1]=1;
    c=a+b;
    int cnt = 2;
    for(;cnt<n&&c.len<m;++cnt){
        a=b;
        b=c;
        c=a+b;
    }
    A.Clear(1,3);
    B.Clear(3,3);
    A.g[1][1]=solve(c);
    if(cnt==n){
        printf("%d\n",A.g[1][1]);
        return 0;
    }

    a=b;
    b=c;
    c=a+b;
    ++cnt;
    A.g[1][2]=solve(c);
    A.g[1][3]=1;
    a.len=m-1<<1;
    for(int i=2;i<=m;++i)
        a.g[i=1]=b.g[b.len-m+i];
    for(int i=1;i<m;++i)
        a.g[m+i-1]=c.g[i];
    B.g[3][2]=solve(a);
    B.g[2][2]=B.g[1][2]=B.g[3][3]=B.g[2][1]=1;
    C=B;
    a.len=m<<1;
    for(int i=2;i<=m;++i)
        a.g[i-1]=b.g[b.len-m+i];
    for(int i=1;i<m;++i)
        a.g[m+i-1]=b.g[i];
    C.g[3][2]=solve(a);
    C=B*C;
    n-=cnt;
    A=A*(C^(n>>1));

    if(n&1)A=A*B;

    printf("%d\n",A.g[1][2]);
    return 0;
}