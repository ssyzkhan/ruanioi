import java.util.*;
public class p78220{
    public static void main(String[] args) {
        Integer a[] = { 5, 1, 9, 4, 6, 2, 0, 3, 8, 7 }, i;
        ArrayList<Integer> A = new ArrayList<Integer>();
        for (i = 0; i < 10; i++)
            A.add(a[i]);
        Sort.quickSort((List)A,0,9,new Greater());
        System.out.println(A);

        String b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
        Vector<String> B=new Vector<String>();
        for(i=0;i<6;i++)
            B.add(b[i]);
        Sort.quickSort((List)B,0,5,new Less());
        System.out.println(B);

        Double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
        LinkedList<Double> C=new LinkedList<Double>();
        for(i=0;i<10;i++)
            C.add(c[i]);
        Sort.quickSort((List)C,0,9,new Greater());
        System.out.println(C);
    }
   

}