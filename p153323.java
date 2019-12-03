public class p153323{
   public static void main(String[] args) {
       double[][] w={{0.0,3.0,8.0,Double.MAX_VALUE,-4.0},
       {Double.MAX_VALUE,0.0,Double.MAX_VALUE,1.0,7.0},
       {Double.MAX_VALUE,4.0,0.0,Double.MAX_VALUE,Double.MAX_VALUE},
       {2.0,Double.MAX_VALUE,-5.0,0.0,Double.MAX_VALUE},
       {Double.MAX_VALUE,Double.MAX_VALUE,Double.MAX_VALUE,6.0,0.0}},d;
       int n=5,i,j,k;
       int[][] pi;
       Pair r;
       r=Floyd.floydWarshall(w);
       d=(double[][])r.first;
       pi=(int[][])r.second;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                System.out.print(d[i][j]+" ");
            System.out.println();
        }
        System.out.println();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                System.out.print(pi[i][j]+" ");
            System.out.println();
        }
        System.out.println();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                Floyd.printAllPairsShotestPath(pi,i,j);
                System.out.println(" : "+d[i][j]);
            }
        } 
   }
}