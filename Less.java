import java.util.Comparator;
public class Less implements Comparator<Comparable>{
    public int compare(Comparable x, Comparable y){
        return y.compareTo(x);
    }
}