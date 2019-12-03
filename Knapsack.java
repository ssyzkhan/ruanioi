public class Knapsack{
    public static int[][] knapsack(int[] w,int[] v, int c){
        int i,j,n=w.length;
        int[][] m=new int[n+1][c+1];
        for(i=1;i<n+1;i++)
            m[i][0]=0;
        for(j=0;j<c+1;j++)
            m[0][j]=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=c;j++){
                m[i][j]=m[i-1][j];
                if(w[i-1]<=j)
                    if(v[i-1]+m[i-1][j-w[i-1]]>m[i-1][j])
                        m[i][j]=v[i-1]+m[i-1][j-w[i-1]];
            }
        return m;
    }
    public static int[] buildSolution(int[][] m,int[] w,int c){
        int i,j=c,n=w.length;
        int[] x=new int[n];
        for(i=n;i>=1;i--)
            if(m[i][j]==m[i-1][j])
                x[i-1]=0;
            else{
                x[i-1]=1;
                j-=w[i-1];
            }
        return x;
    }
}