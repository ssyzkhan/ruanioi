public class ActivitySelector{
    public static int[] x;
    public static void recurciveActivitySelector(int[] s,int[] f,int i,int j){
        int m=i+1;
        while(m<j&&s[m]<f[i])
            x[m++]=0;
        if(m<j){
            x[m]=1;
            recurciveActivitySelector(s,f,m,j);
        }
    }
}