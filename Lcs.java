import javax.lang.model.util.ElementScanner6;
public class Lcs{
    public static int[][] lcsLength(Object[] x,Object[] y){
        int m=x.length,n=y.length,i,j;
        int[][] c=new int[m+1][n+1];
        for(i=1;i<=m;i++)
            c[i][0]=0;
        for(j=0;j<=n;j++)
            c[0][j]=0;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
                if(x[i-1].equals(y[j-1]))
                    c[i][j]=c[i-1][j-1]+1;
                else if(c[i-1][j]>=c[i][j-1])
                    c[i][j]=c[i-1][j];
                else
                    c[i][j]=c[i][j-1];
        return c;
    }
    public static void printLcs(int[][] c,Object[] x,Object[] y,int i,int j){
        if(i==0||j==0)
            return;
        if(x[i-1].equals(y[j-1])){
            printLcs(c,x,y,i-1,j-1);
            System.out.print(x[i-1]+" ");
        }else if(c[i-1][j]>=c[i][j-1])
            printLcs(c,x,y,i-1,j);
        else
            printLcs(c,x,y,i,j-1);
        
    }
}