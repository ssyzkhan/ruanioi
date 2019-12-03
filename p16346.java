public class p16346{
    public static void main(String[] args) {
        ActivitySelector.x=new int[12];
        int s[]={0,1,3,0,5,3,5,6,8,8,2,12,Integer.MAX_VALUE},
            f[]={0,4,5,6,7,8,9,10,11,12,13,14,Integer.MAX_VALUE};
        ActivitySelector.recurciveActivitySelector(s,f,0,12);
        for(int i=1;i<12;i++)
            System.out.print(ActivitySelector.x[i]+" ");
        System.out.println();
    }
}