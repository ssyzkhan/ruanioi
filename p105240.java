import java.util.PriorityQueue;
import java.util.Vector;
public class p105240{
    public static void main(String[] args) {
        Integer a[]={5,1,9,4,6,2,0,3,8,7},i;
        String b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
        Double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
        PriorityQueue q=new PriorityQueue(10,new Less());
        PriorityQueue q1=new PriorityQueue();
        PriorityQueue q2=new PriorityQueue(10,new Greater());
        for(i=0;i<10;i++){
            q.add(a[i]);
            q2.add(c[i]);
        }
        for(i=0;i<6;i++)
            q1.add(b[i]);

        while(!q.isEmpty())
            System.out.print(q.poll()+" ");
        System.out.println();

        while(!q1.isEmpty())
            System.out.print(q1.poll()+" ");
        System.out.println();

        while(!q2.isEmpty())
            System.out.print(q2.poll()+ " ");
        System.out.println();
    }
    
}