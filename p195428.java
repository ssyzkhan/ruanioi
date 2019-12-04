public class p195428{
    public static void main(String[] args) {
        double a[][]={{0,4,0,0,0,0,0,8,0},
            {4,0,8,0,0,0,0,11,0},
            {0,8,0,7,0,4,0,0,2},
            {0,0,7,0,9,14,0,0,0},
            {0,0,0,9,0,10,0,0,0},
            {0,0,4,14,10,0,2,0,0},
            {0,0,0,0,0,2,0,1,6},
            {8,11,0,0,0,0,1,0,7},
            {0,0,2,0,0,0,6,7,0}};
        double weight=0.0;
        int i,n=9;
        int[] pi;
        Vertex[] key;
        Pair r=new Pair();
        r=MST.prime(a,0);
        key=(Vertex[])r.first;
        pi=(int[])r.second;
        for(i=0;i<n;i++){
            weight+=key[i].weight;
            if(pi[i]>=0)
                System.out.print(" <"+pi[i]+", "+i+"> ");
        }
        System.out.println();
        System.out.println("Weight: "+weight);
    }
}