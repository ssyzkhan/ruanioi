public class MatrixChain{
    public static Pair matrixChainOrder(int[] p){
        int n=p.length-1,i,l,j,k,q;
        int[][] m=new int[n+1][n+1],s=new int[n+1][n+1];
        for(i=0;i<=n;i++)
            m[i][i]=0;
        for(l=2;l<=n;l++)
            for(i=1;i<=n-l+1;i++){
                j=i+l-1;
                m[i][j]=Integer.MAX_VALUE;
                for(k=i;k<=j-1;k++){
                    q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                    if(q<m[i][j]){
                        m[i][j]=q;
                        s[i][j]=k;
                    }
                }
            }
        return Pair.make(m,s);
    }
    public static void printOptimalParents(int[][] s,int i,int j){
        if(i==j)
            System.out.print("A"+i);
        else{
            System.out.print("(");
            printOptimalParents(s,i,s[i][j]);
            printOptimalParents(s,s[i][j]+1,j);
            System.out.print(")");
        }
    }
}