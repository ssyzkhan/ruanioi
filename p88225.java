import java.util.*;
public class p88225{
   public static void main(String[] args) {
       int h[]={4,1,3,2,16,9,10,14,8,7},i;
       Vector<Integer> H = new Vector<Integer>();
       for(i=0;i<10;i++)
            H.add(h[i]);
        LinearList.buildHeap((List)H,new Greater());
        System.out.println("max heap: ");
        System.out.println(H);

        LinearList.buildHeap((List)H,new Less());
        System.out.println("min heap: ");
        System.out.println(H);
   }
}