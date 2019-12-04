public class Vertex implements Comparable<Vertex>{
    double weight;
    int index;
    public Vertex(){}
    public Vertex(double w,int i){
        weight=w;
        index=i;
    }
    public int compareTo(Vertex v){
        if(weight>v.weight)
            return 1;
        if(weight<v.weight)
            return -1;
        return 0;
    }
}