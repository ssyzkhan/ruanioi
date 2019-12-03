public class p41133{
    public static void main(String[] args) {
        Integer a[]={1,2,5,8,9,0,3,4,6,7},i;
        LinearList.merge(a,0,4,9);
        for(i=0;i<10;i++)
            System.out.print(a[i]+" ");
        System.out.println();

        String b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
        LinearList.merge(b,0,2,5);
        for(i=0;i<6;i++)
            System.out.print(b[i]+" ");
        System.out.println();

        Double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
        LinearList.merge(c,0,4,9);
        for(i=0;i<10;i++)
            System.out.print(c[i]+" ");
        System.out.println();
    }
}