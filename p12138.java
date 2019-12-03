public class p12138{
    public static void main(String[] args) {
        int p[]={30,35,15,5,10,20,25};
        int[][] m,s;
        Pair r=MatrixChain.matrixChainOrder(p);
        m=(int[][])r.first;
        s=(int[][])r.second;
        MatrixChain.printOptimalParents(s,1,6);
        System.out.println();
        System.out.println(m[1][6]);
    }
}