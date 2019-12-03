public class Hanoi{
    public static int count;
    public static void hanoi(char[] current,int n,char A,char B,char C){
        if(n==1){
            int i=0;
            i=pickTopDisk(current,A);
            current[i]=C;
            count++;
            System.out.println("Count "+count+" Move "+(i+1)+ " from " +A+" to " + C);
            return;
        }
        hanoi(current,n-1,A,C,B);
        count++;
        System.out.println("Count " +count+ " Move "+n+ " from " +A+ " to " + C);
        hanoi(current,n-1,B,A,C);
    }
    private static int pickTopDisk(char[] current,char x){
        int i=0;
        while(current[i]!=x)
            i++;
        return i;
    }
   
}