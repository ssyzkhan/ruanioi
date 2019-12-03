import java.util.*;
public class Sort{
    public static void insertionSort(int[] a){
        int i,j,key,n=a.length;
        for(j=1;j<n;j++){
            key=a[j];
            i=j-1;
            while(i>=0&&a[i]>key){
                a[i+1]=a[i];
                i--;
            }
            a[i+1]=key;
        }
    }

    public static void insertionSort(Comparable[] a){
        int i,j,n=a.length;
        Comparable key;
        for(j=1;j<n;j++){
            key = a[j];
            i=j-1;
            while(i>=0 && (a[i].compareTo(key)>0)){
                a[i+1]=a[i];
                i--;
            }
            a[i+1]=key;
        }
    }

    public static void insertionSort(List<Comparable> a){
        int i,j,n=a.size();
        Comparable key;
        for(j=1;j<n;j++){
            key = a.get(j);
            i=j-1;
            while(i>=0 && (a.get(i).compareTo(key)>0)){
                a.set(i+1,a.get(i));
                i--;
            }
            a.set(i+1,key);
        }
    }

    public static void insertionSort(List<Comparable> a,Comparator comp){
        int i,j,n=a.size();
        Comparable key;
        for(j=1;j<n;j++){
            key = a.get(j);
            i=j-1;
            while(i>=0 && comp.compare(a.get(i),key)>0)
                i--;
            Collections.rotate(a.subList(i+1,j+1),1);
        }
    }

   static public void mergeSort(List<Comparable> a,int p,int r, Comparator comp){
        if(p<r){
            int q=(p+r)/2;
            mergeSort(a,p,q,comp);
            mergeSort(a,q+1,r,comp);
            LinearList.merge(a,p,q,r,comp);
        }
   }

   static public void quickSort(List<Comparable> a,int p,int r,Comparator comp){
       if(p<r){
           int q=LinearList.randomizedPartition(a,p,r,comp);
           quickSort(a,p,q,comp);
           quickSort(a,q+1,r,comp);
       }
   }
   static public void heapSort(List<Comparable> a,Comparator comp){
       int i,heapSize=a.size();
       LinearList.buildHeap(a,comp);
       for(i=heapSize-1;i>0;i--){
           Collections.swap(a,0,i);
           heapSize--;
           LinearList.heapify(a,0,heapSize,comp);
       }
   }
}