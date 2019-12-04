public class BinaryTree implements Comparable<BinaryTree>{
    int key;
    char data;
    BinaryTree left;
    BinaryTree right;
    public BinaryTree(){}
    public BinaryTree(int k,char d,BinaryTree l,BinaryTree r){
        key=k;
        data=d;
        left=l;
        right=r;
    }
    public String toString(){
        return "character: "+data+" frequency: "+key;
    }
    public int compareTo(BinaryTree x){
        if(key>x.key)
            return 1;
        if(key<x.key)
            return -1;
        return 0;
    }
    public void inorderWalk(){
        if(left!=null)
            left.inorderWalk();
        System.out.print(toString());
        if(right!=null)
            right.inorderWalk();
    }
}