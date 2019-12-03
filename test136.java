import java.util.*;
public class test136{
    public static void main(String[] args) {
        Integer a[]={1,2,5,8,9,0,3,4,6,7},i;
        ArrayList<Integer> A=new ArrayList<Integer>();
        for(i=0;i<10;i++)
            A.add(a[i]);
        
        LinearList.merge((List)A,0,4,9,new Greater());
        System.out.print(A);
        System.out.println();

        String b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
        Vector<String> B = new Vector<String>();
        for(i=0;i<6;i++)
            B.add(b[i]);
        LinearList.merge((List)B,0,2,5,new Greater());
        System.out.println(B);

        Double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
        LinkedList<Double> C=new LinkedList<Double>();
        for(i=0;i<10;i++)
            C.add(c[i]);
        LinearList.merge((List)C,0,4,9,new Greater());
        System.out.println(C);
    }
}