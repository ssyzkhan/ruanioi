import java.util.*;
public class p30125{
    public static void main(String[] args) {
        int i;

        Integer[] a={5,1,9,4,6,2,0,3,8,7};
        //Sort.insertionSort(a);
        for(i=0;i<10;i++)
            System.out.print(a[i]+" ");
        System.out.println();

        String[] b={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
        //Sort.insertionSort(b);
        for(i=0;i<6;i++)
            System.out.print(b[i]+" ");
        System.out.println();

        Double[] c={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
        Sort.insertionSort(c);
        for(i=0;i<10;i++)
            System.out.print(c[i]+" ");
        System.out.println();

        ArrayList<Integer> A = new ArrayList<Integer>();
        for(i=0;i<10;i++)
            A.add(a[i]);
        Sort.insertionSort((List)A);
        System.out.println(A);
        
        Vector<String> B = new Vector<String>();
        for(i=0;i<6;i++)
            B.add(new String(b[i]));
        Sort.insertionSort((List)B);
        System.out.println(B);
        
        LinkedList<Double> C = new LinkedList<Double>();
        for(i=0;i<10;i++)
            C.add(c[i]);
        Sort.insertionSort((List)C);
        System.out.println(C);
        
        Sort.insertionSort((List)A,new Less());
        System.out.println(A);

        Sort.insertionSort((List)B,new Less());
        System.out.println(B);

        Sort.insertionSort((List)C,new Less());
        System.out.println(C);
    }
}