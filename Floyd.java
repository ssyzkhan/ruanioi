import java.util.Arrays;
public class Floyd{
    public static Pair floydWarshall(double[][] w){
        int n=w.length,i,j,k;
        double [][] d=new double[n][n];
        int[][] pi=new int[n][n];
        d=Arrays.copyOf(w,n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(j==i||w[i][j]>=Double.MAX_VALUE)
                    pi[i][j]=-1;
                else
                    pi[i][j]=i;
        for(k=1;k<=n;k++)
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    if(d[i][j]>d[i][k-1]+d[k-1][j]){
                        d[i][j]=d[i][k-1]+d[k-1][j];
                        pi[i][j]=pi[k-1][j];
                    }
                
        return Pair.make(d,pi);        

    }
    public static void printAllPairsShotestPath(int[][] pi,int i,int j){
        int n=pi.length;
        if(i==j){
            System.out.print((i+1)+ " ");
            return;
        }
        if(pi[i][j]==-1)
            System.out.println("no path from "+(i+1)+ "to "+(j+1)+"exists. ");
        else{
            printAllPairsShotestPath(pi,i,pi[i][j]);
            System.out.print((j+1)+" ");
        }
    }
}