public class Pair{
    public Object first;
    public Object second;
    public Pair(){
        first=new Object();
        second=new Object();
    }
    public static Pair make(Object a,Object b){
        Pair p=new Pair();
        p.first=a;
        p.second=b;
        return p;
    }
}