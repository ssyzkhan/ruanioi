import java.util.PriorityQueue;
public class  Huffman{
    public static BinaryTree huffman(int[] f,char[] d){
        int i,n=f.length;
        PriorityQueue<BinaryTree> Q=new PriorityQueue<BinaryTree>(n);
        for(i=0;i<n;i++){
            BinaryTree t=new BinaryTree(f[i],d[i],null,null);
            Q.add(t);
        }
        for(i=0;i<n-1;i++){
            BinaryTree x,y,z;
            x=Q.poll();
            y=Q.poll();
            z=new BinaryTree(x.key+y.key,'*',x,y);
            Q.add(z);
        }
        return Q.poll();
    }
    public static void printCode(BinaryTree t,String c){
        if(t.left!=null)
            printCode(t.left,c+"0");
        if(t.right!=null)
            printCode(t.right,c+"1");
        if(t.left==null&&t.right==null)
            System.out.print(t +" code: "+c+" \n");          
    }
}