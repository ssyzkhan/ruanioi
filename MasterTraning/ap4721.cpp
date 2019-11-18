#include<bits/stdc++.h>
#define For(i,a,b)for(int i=a,bb=b;i<=bb;++i)

const int MaxM=55,mod=1e9+7;
int h[MaxM],inv[MaxM],n,m;
struct matrix{
    int r,c;
    int g[MaxM][MaxM];
    matrix(){}
    matrix(int _r,int _c):
        r(_r),c(_c){memset(g,0,sizeof(g));}
    
    inline void init(){
        For(i,1,r)g[i][i]=1;
        return;
    }

    inline matrix operator *(const matrix & rhs)const{
        matrix res = matrix(r,rhs.c);
        For(i,1,r)
        For(k,1,c)
        For(j,1,rhs.c)
            res.g[i][j]=(1LL*g[i][k]*rhs.g[k][j]+res.g[i][j])%mod;
        return res;
    }

    inline matrix operator ^(int y)const{
        matrix x = *this,res=matrix(r,c);
        res.init();
        while(y){
            if(y&1)res=res*x;
            x=x*x;
            y>>=1;
        }
        return res;
    }
}A,B;   

template<class T>
inline void get(T& res){
    char ch;
    bool bo = false;
    while((ch=getchar())<'0'||ch>'9')
        if(ch=='-')bo=true;
    res=ch-'0';
    while((ch=getchar())>='0'&&ch<='9')
        res=(res<<1)+(res<<3)+ch-'0';
    if(bo)res=~res+1;
    return;
}

template<class T>
inline void put(T x){
    if(x<0){
        putchar('-');
        x=~x+1;
    }
    if(x>9)put(x/10);
    putchar(x%10+'0');
    return;
}

int main(){
    get(n),get(m);
    n>>=1,m>>1;
    inv[1]=1;
    For(i,2,m+1)inv[i]=1LL*(mod-mod/i)*inv[mod%i]%mod;
    h[0]=2;
    For(i,1,m-1) //预处理卡特兰数的两倍
        h[i]=1LL*h[i-1]*(4*i-2)%mod*inv[i+1]%mod;
    A=matrix(1,m);
    A.g[1][1]=1;
    B=matrix(m,m);
    For(i,1,m)B.g[i][1]=h[i-1];
    For(i,1,m-1)B.g[i][i+1]=1; //预处理转移矩阵
    A=A*(B^n);
    put(A.g[1][1]);
    putchar('\n');
    return 0;
}