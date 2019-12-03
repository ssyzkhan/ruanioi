public class p141319{
    public static void main(String[] args) {
        int w[]={2,3,4,5},v[]={3,4,5,7};
        int[][] m;
        int[] x;
        m=Knapsack.knapsack(w,v,9);
        x=Knapsack.buildSolution(m,w,9);
        for(int i=0;i<4;i++)
            System.out.print(x[i]+" ");
        System.out.println();
        for(int i=0;i<5;i++){
            System.out.println();
            for(int j=0;j<10;j++)
                System.out.print(m[i][j]+"      ");
        }
    }
}