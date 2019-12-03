import java.util.Vector;
public class p104239{
    public static void main(String[] args) {
        Integer a[]={5,1,9,4,6,2,0,3,8,7},i;
        String b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
        Double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
        PrioQueue q=new PrioQueue();
        PrioQueue q1=new PrioQueue(new Less());
        PrioQueue q2=new PrioQueue(new Greater());
        for(i=0;i<10;i++){
            q.enQueue(a[i]);
            q2.enQueue(c[i]);
        }
        for(i=0;i<6;i++)
            q1.enQueue(b[i]);

        while(!q.empty())
            System.out.print(q.deQueue()+" ");
        System.out.println();

        while(!q1.empty())
            System.out.print(q1.deQueue()+" ");
        System.out.println();

        while(!q2.empty())
            System.out.print(q2.deQueue()+ " ");
        System.out.println();
    }
    
}