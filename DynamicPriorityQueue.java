import java.util.Vector;
import java.util.Comparator;
import java.util.Collections;
public class DynamicPriorityQueue{
    private Vector<Comparable> heap;
    private int heapSize;
    Comparator comparator;
    public DynamicPriorityQueue(){
        heapSize=0;
        heap=new Vector<Comparable>();
        comparator=new Greater();
    }
    public DynamicPriorityQueue(Comparator comp){
        heapSize=0;
        heap=new Vector<Comparable>();
        comparator=comp;
    }
    public void enQueue(Comparable e){
        int i=heapSize++;
        heap.add(e);
        while((i>0)&&(comparator.compare(heap.get(i),heap.get(LinearList.parent(i)))>0)){
            Collections.swap(heap,LinearList.parent(i),i);
            i=LinearList.parent(i);
        }
    }
    public Comparable deQueue(){
        if(heapSize<1)
            return null;
        Comparable top=heap.get(0);
        heapSize--;
        heap.set(0,heap.get(heapSize));
        heap.remove(heapSize);
        LinearList.heapify(heap,0,heapSize,comparator);
        return top;
    }
    public boolean empty(){
        return heapSize<=0;
    }
    public void fix(){
        int i;
        for(i=heapSize/2;i>=0;i--)
            LinearList.heapify(heap,i,heapSize,comparator);
    }
}