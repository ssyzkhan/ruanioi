import java.util.*;

public class Inversion {
    public static int getTheInversion(int[] a) {
        int i,j,key,n=a.length,count=0;
        for(j=1;j<n;j++){
            key=a[j];
            i=j-1;
            while(i>=0&&a[i]>key){
                a[i+1]=a[i];
                i--;
                count++;
            }
            a[i+1]=key;
        }
        return count;
    }
}