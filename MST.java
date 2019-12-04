import java.util.Arrays;
public class MST{
    public static Pair prime(double[][] w,int r){
        int n=w.length,i;
        Vertex[] key=new Vertex[n];
        int[] pi=new int[n];
        boolean[] poped=new boolean[n];
        for(i=0;i<n;i++)
            key[i]=new Vertex(Double.POSITIVE_INFINITY,i);
        key[r].weight=0.0;
        Arrays.fill(pi,-1);
        Arrays.fill(poped,false);
        DynamicPriorityQueue Q=new DynamicPriorityQueue(new Less());
        for(i=0;i<n;i++)
            Q.enQueue(key[i]);
        while(!Q.empty()){
            int u=((Vertex)(Q.deQueue())).index;
            poped[u]=true;
            for(int v=0;v<n;v++){
                if(w[u][v]>0.0)
                    if(!poped[v])
                        if(w[u][v]<key[v].weight){
                            pi[v]=u;
                            key[v].weight=w[u][v];
                        }
            }
            Q.fix();
        }
        return Pair.make(key,pi);
    }
}